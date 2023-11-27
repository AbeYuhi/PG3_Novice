#include "Player.h"

Player::Player() {}
Player::~Player() {}

void Player::Initialize() {
	pos_ = {200, 300};
	size_ = {30, 30};
	speed_ = {3.0f, 3.0f};
}

void Player::Update() {

}

void Player::Draw() {
	Novice::DrawEllipse((int)pos_.x, (int)pos_.y, (int)size_.x, (int)size_.y, 0, WHITE, kFillModeSolid);
}

void Player::MoveRight() {
	pos_.x += speed_.x;
}

void Player::MoveLeft() {
	pos_.x -= speed_.x;
}