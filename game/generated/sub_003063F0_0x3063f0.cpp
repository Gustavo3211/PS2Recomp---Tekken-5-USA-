#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003063F0
// Address: 0x3063f0 - 0x3066c0
void sub_003063F0_0x3063f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003063F0_0x3063f0");
#endif

    switch (ctx->pc) {
        case 0x306460u: goto label_306460;
        case 0x30646cu: goto label_30646c;
        case 0x306480u: goto label_306480;
        case 0x30648cu: goto label_30648c;
        case 0x3064a0u: goto label_3064a0;
        case 0x3064acu: goto label_3064ac;
        case 0x3064c0u: goto label_3064c0;
        case 0x3064ccu: goto label_3064cc;
        case 0x3064e0u: goto label_3064e0;
        case 0x3064ecu: goto label_3064ec;
        case 0x306508u: goto label_306508;
        case 0x306534u: goto label_306534;
        case 0x306564u: goto label_306564;
        case 0x306590u: goto label_306590;
        case 0x3065c0u: goto label_3065c0;
        case 0x3065f0u: goto label_3065f0;
        case 0x30661cu: goto label_30661c;
        case 0x306628u: goto label_306628;
        case 0x306634u: goto label_306634;
        case 0x306680u: goto label_306680;
        case 0x306690u: goto label_306690;
        case 0x3066a0u: goto label_3066a0;
        default: break;
    }

    ctx->pc = 0x3063f0u;

    // 0x3063f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3063f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3063f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3063f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3063f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3063f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3063fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3063fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x306400: 0x2625004c  addiu       $a1, $s1, 0x4C
    ctx->pc = 0x306400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x306404: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x306404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x306408: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x306408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30640c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x30640Cu;
    {
        const bool branch_taken_0x30640c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30640c) {
            ctx->pc = 0x306410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30640Cu;
            // 0x306410: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306428u;
            goto label_306428;
        }
    }
    ctx->pc = 0x306414u;
    // 0x306414: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x306414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x306418: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x306418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x30641c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30641Cu;
    {
        const bool branch_taken_0x30641c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x306420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30641Cu;
        // 0x306420: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30641c) {
            ctx->pc = 0x306430u;
            goto label_306430;
        }
    }
    ctx->pc = 0x306424u;
    // 0x306424: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x306424u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_306428:
    // 0x306428: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x306428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30642c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x30642cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_306430:
    // 0x306430: 0x5200009f  beql        $s0, $zero, . + 4 + (0x9F << 2)
    ctx->pc = 0x306430u;
    {
        const bool branch_taken_0x306430 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x306430) {
            ctx->pc = 0x306434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306430u;
            // 0x306434: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3066B0u;
            goto label_3066b0;
        }
    }
    ctx->pc = 0x306438u;
    // 0x306438: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x306438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x30643c: 0x5040009c  beql        $v0, $zero, . + 4 + (0x9C << 2)
    ctx->pc = 0x30643Cu;
    {
        const bool branch_taken_0x30643c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30643c) {
            ctx->pc = 0x306440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30643Cu;
            // 0x306440: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3066B0u;
            goto label_3066b0;
        }
    }
    ctx->pc = 0x306444u;
    // 0x306444: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x306444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x306448: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x306448u;
    {
        const bool branch_taken_0x306448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306448) {
            ctx->pc = 0x30644Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306448u;
            // 0x30644c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3064FCu;
            goto label_3064fc;
        }
    }
    ctx->pc = 0x306450u;
    // 0x306450: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x306450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x306454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x306454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306458: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x306458u;
    SET_GPR_U32(ctx, 31, 0x306460u);
    ctx->pc = 0x30645Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306458u;
    // 0x30645c: 0x24a52538  addiu       $a1, $a1, 0x2538 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x306458u, 0x306460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306460u;
label_306460:
    // 0x306460: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x306460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x306464: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x306464u;
    SET_GPR_U32(ctx, 31, 0x30646Cu);
    ctx->pc = 0x306468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306464u;
    // 0x306468: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x306464u, 0x30646Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30646Cu;
label_30646c:
    // 0x30646c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x30646cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x306470: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x306470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x306474: 0x24a52558  addiu       $a1, $a1, 0x2558
    ctx->pc = 0x306474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9560));
    // 0x306478: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x306478u;
    SET_GPR_U32(ctx, 31, 0x306480u);
    ctx->pc = 0x30647Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306478u;
    // 0x30647c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x306478u, 0x306480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306480u;
label_306480:
    // 0x306480: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x306480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x306484: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x306484u;
    SET_GPR_U32(ctx, 31, 0x30648Cu);
    ctx->pc = 0x306488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306484u;
    // 0x306488: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x306484u, 0x30648Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30648Cu;
label_30648c:
    // 0x30648c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x30648cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x306490: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x306490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x306494: 0x24a52578  addiu       $a1, $a1, 0x2578
    ctx->pc = 0x306494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9592));
    // 0x306498: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x306498u;
    SET_GPR_U32(ctx, 31, 0x3064A0u);
    ctx->pc = 0x30649Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306498u;
    // 0x30649c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x306498u, 0x3064A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3064A0u;
label_3064a0:
    // 0x3064a0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3064a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3064a4: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x3064A4u;
    SET_GPR_U32(ctx, 31, 0x3064ACu);
    ctx->pc = 0x3064A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3064A4u;
    // 0x3064a8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x3064A4u, 0x3064ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3064ACu;
label_3064ac:
    // 0x3064ac: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3064acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3064b0: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x3064b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x3064b4: 0x24a52598  addiu       $a1, $a1, 0x2598
    ctx->pc = 0x3064b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9624));
    // 0x3064b8: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x3064B8u;
    SET_GPR_U32(ctx, 31, 0x3064C0u);
    ctx->pc = 0x3064BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3064B8u;
    // 0x3064bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x3064B8u, 0x3064C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3064C0u;
label_3064c0:
    // 0x3064c0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3064c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3064c4: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x3064C4u;
    SET_GPR_U32(ctx, 31, 0x3064CCu);
    ctx->pc = 0x3064C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3064C4u;
    // 0x3064c8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x3064C4u, 0x3064CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3064CCu;
label_3064cc:
    // 0x3064cc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3064ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3064d0: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x3064d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x3064d4: 0x24a525b8  addiu       $a1, $a1, 0x25B8
    ctx->pc = 0x3064d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9656));
    // 0x3064d8: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x3064D8u;
    SET_GPR_U32(ctx, 31, 0x3064E0u);
    ctx->pc = 0x3064DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3064D8u;
    // 0x3064dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x3064D8u, 0x3064E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3064E0u;
label_3064e0:
    // 0x3064e0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3064e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3064e4: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x3064E4u;
    SET_GPR_U32(ctx, 31, 0x3064ECu);
    ctx->pc = 0x3064E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3064E4u;
    // 0x3064e8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x3064E4u, 0x3064ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3064ECu;
label_3064ec:
    // 0x3064ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3064ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3064f0: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x3064f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x3064f4: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x3064f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x3064f8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3064f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3064fc:
    // 0x3064fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3064fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306500: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x306500u;
    SET_GPR_U32(ctx, 31, 0x306508u);
    ctx->pc = 0x306504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306500u;
    // 0x306504: 0x24a525c8  addiu       $a1, $a1, 0x25C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x306500u, 0x306508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306508u;
label_306508:
    // 0x306508: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x306508u;
    {
        const bool branch_taken_0x306508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306508u;
        // 0x30650c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306508) {
            ctx->pc = 0x306528u;
            goto label_306528;
        }
    }
    ctx->pc = 0x306510u;
    // 0x306510: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x306510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x306514: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x306514u;
    {
        const bool branch_taken_0x306514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x306514) {
            ctx->pc = 0x306528u;
            goto label_306528;
        }
    }
    ctx->pc = 0x30651Cu;
    // 0x30651c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x30651cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x306520: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x306520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x306524: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x306524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_306528:
    // 0x306528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x306528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30652c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x30652Cu;
    SET_GPR_U32(ctx, 31, 0x306534u);
    ctx->pc = 0x306530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30652Cu;
    // 0x306530: 0x24a525d8  addiu       $a1, $a1, 0x25D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x30652Cu, 0x306534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306534u;
label_306534:
    // 0x306534: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x306534u;
    {
        const bool branch_taken_0x306534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306534) {
            ctx->pc = 0x306538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306534u;
            // 0x306538: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306558u;
            goto label_306558;
        }
    }
    ctx->pc = 0x30653Cu;
    // 0x30653c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x30653cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x306540: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x306540u;
    {
        const bool branch_taken_0x306540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x306544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306540u;
        // 0x306544: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306540) {
            ctx->pc = 0x306554u;
            goto label_306554;
        }
    }
    ctx->pc = 0x306548u;
    // 0x306548: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x306548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x30654c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x30654cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x306550: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x306550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_306554:
    // 0x306554: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x306554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_306558:
    // 0x306558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x306558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30655c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x30655Cu;
    SET_GPR_U32(ctx, 31, 0x306564u);
    ctx->pc = 0x306560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30655Cu;
    // 0x306560: 0x24a525e8  addiu       $a1, $a1, 0x25E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x30655Cu, 0x306564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306564u;
label_306564:
    // 0x306564: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x306564u;
    {
        const bool branch_taken_0x306564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306564u;
        // 0x306568: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306564) {
            ctx->pc = 0x306584u;
            goto label_306584;
        }
    }
    ctx->pc = 0x30656Cu;
    // 0x30656c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x30656cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x306570: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x306570u;
    {
        const bool branch_taken_0x306570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x306570) {
            ctx->pc = 0x306584u;
            goto label_306584;
        }
    }
    ctx->pc = 0x306578u;
    // 0x306578: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x306578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x30657c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x30657cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x306580: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x306580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_306584:
    // 0x306584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x306584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306588: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x306588u;
    SET_GPR_U32(ctx, 31, 0x306590u);
    ctx->pc = 0x30658Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306588u;
    // 0x30658c: 0x24a52608  addiu       $a1, $a1, 0x2608 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x306588u, 0x306590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306590u;
label_306590:
    // 0x306590: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x306590u;
    {
        const bool branch_taken_0x306590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306590) {
            ctx->pc = 0x306594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306590u;
            // 0x306594: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3065B4u;
            goto label_3065b4;
        }
    }
    ctx->pc = 0x306598u;
    // 0x306598: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x306598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x30659c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30659Cu;
    {
        const bool branch_taken_0x30659c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3065A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30659Cu;
        // 0x3065a0: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30659c) {
            ctx->pc = 0x3065B0u;
            goto label_3065b0;
        }
    }
    ctx->pc = 0x3065A4u;
    // 0x3065a4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x3065a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x3065a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3065a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3065ac: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x3065acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_3065b0:
    // 0x3065b0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3065b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3065b4:
    // 0x3065b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3065b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3065b8: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x3065B8u;
    SET_GPR_U32(ctx, 31, 0x3065C0u);
    ctx->pc = 0x3065BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3065B8u;
    // 0x3065bc: 0x24a52618  addiu       $a1, $a1, 0x2618 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x3065B8u, 0x3065C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3065C0u;
label_3065c0:
    // 0x3065c0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3065C0u;
    {
        const bool branch_taken_0x3065c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3065c0) {
            ctx->pc = 0x3065C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3065C0u;
            // 0x3065c4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3065E4u;
            goto label_3065e4;
        }
    }
    ctx->pc = 0x3065C8u;
    // 0x3065c8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3065c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3065cc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3065CCu;
    {
        const bool branch_taken_0x3065cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3065D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3065CCu;
        // 0x3065d0: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3065cc) {
            ctx->pc = 0x3065E0u;
            goto label_3065e0;
        }
    }
    ctx->pc = 0x3065D4u;
    // 0x3065d4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x3065d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x3065d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3065d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3065dc: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x3065dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_3065e0:
    // 0x3065e0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3065e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3065e4:
    // 0x3065e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3065e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3065e8: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x3065E8u;
    SET_GPR_U32(ctx, 31, 0x3065F0u);
    ctx->pc = 0x3065ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3065E8u;
    // 0x3065ec: 0x24a52630  addiu       $a1, $a1, 0x2630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x3065E8u, 0x3065F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3065F0u;
label_3065f0:
    // 0x3065f0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3065F0u;
    {
        const bool branch_taken_0x3065f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3065F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3065F0u;
        // 0x3065f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3065f0) {
            ctx->pc = 0x306614u;
            goto label_306614;
        }
    }
    ctx->pc = 0x3065F8u;
    // 0x3065f8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3065f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3065fc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3065FCu;
    {
        const bool branch_taken_0x3065fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x306600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3065FCu;
        // 0x306600: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3065fc) {
            ctx->pc = 0x306614u;
            goto label_306614;
        }
    }
    ctx->pc = 0x306604u;
    // 0x306604: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x306604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x306608: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x306608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x30660c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x30660cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x306610: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x306610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306614:
    // 0x306614: 0xc0c1e40  jal         func_307900
    ctx->pc = 0x306614u;
    SET_GPR_U32(ctx, 31, 0x30661Cu);
    ctx->pc = 0x306618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306614u;
    // 0x306618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307900u, 0x306614u, 0x30661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30661Cu;
label_30661c:
    // 0x30661c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30661cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306620: 0xc0c1f04  jal         func_307C10
    ctx->pc = 0x306620u;
    SET_GPR_U32(ctx, 31, 0x306628u);
    ctx->pc = 0x306624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306620u;
    // 0x306624: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C10u, 0x306620u, 0x306628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306628u;
label_306628:
    // 0x306628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x306628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30662c: 0xc0c2018  jal         func_308060
    ctx->pc = 0x30662Cu;
    SET_GPR_U32(ctx, 31, 0x306634u);
    ctx->pc = 0x306630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30662Cu;
    // 0x306630: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308060u, 0x30662Cu, 0x306634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306634u;
label_306634:
    // 0x306634: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x306634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x306638: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x306638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30663c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x30663Cu;
    {
        const bool branch_taken_0x30663c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x306640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30663Cu;
        // 0x306640: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30663c) {
            ctx->pc = 0x306688u;
            goto label_306688;
        }
    }
    ctx->pc = 0x306644u;
    // 0x306644: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x306644u;
    {
        const bool branch_taken_0x306644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306644u;
        // 0x306648: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306644) {
            ctx->pc = 0x306660u;
            goto label_306660;
        }
    }
    ctx->pc = 0x30664Cu;
    // 0x30664c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30664cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306650: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x306650u;
    {
        const bool branch_taken_0x306650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x306650) {
            ctx->pc = 0x306678u;
            goto label_306678;
        }
    }
    ctx->pc = 0x306658u;
    // 0x306658: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x306658u;
    {
        const bool branch_taken_0x306658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306658u;
        // 0x30665c: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306658) {
            ctx->pc = 0x3066A4u;
            goto label_3066a4;
        }
    }
    ctx->pc = 0x306660u;
label_306660:
    // 0x306660: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x306660u;
    {
        const bool branch_taken_0x306660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x306664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306660u;
        // 0x306664: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306660) {
            ctx->pc = 0x306698u;
            goto label_306698;
        }
    }
    ctx->pc = 0x306668u;
    // 0x306668: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x306668u;
    {
        const bool branch_taken_0x306668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x306668) {
            ctx->pc = 0x306698u;
            goto label_306698;
        }
    }
    ctx->pc = 0x306670u;
    // 0x306670: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x306670u;
    {
        const bool branch_taken_0x306670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306670u;
        // 0x306674: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306670) {
            ctx->pc = 0x3066A4u;
            goto label_3066a4;
        }
    }
    ctx->pc = 0x306678u;
label_306678:
    // 0x306678: 0xc0c19b0  jal         func_3066C0
    ctx->pc = 0x306678u;
    SET_GPR_U32(ctx, 31, 0x306680u);
    ctx->pc = 0x30667Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306678u;
    // 0x30667c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3066C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3066C0u, 0x306678u, 0x306680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306680u;
label_306680:
    // 0x306680: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x306680u;
    {
        const bool branch_taken_0x306680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306680u;
        // 0x306684: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306680) {
            ctx->pc = 0x3066A4u;
            goto label_3066a4;
        }
    }
    ctx->pc = 0x306688u;
label_306688:
    // 0x306688: 0xc0c1b0a  jal         func_306C28
    ctx->pc = 0x306688u;
    SET_GPR_U32(ctx, 31, 0x306690u);
    ctx->pc = 0x30668Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306688u;
    // 0x30668c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306C28u, 0x306688u, 0x306690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306690u;
label_306690:
    // 0x306690: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x306690u;
    {
        const bool branch_taken_0x306690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306690u;
        // 0x306694: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306690) {
            ctx->pc = 0x3066A4u;
            goto label_3066a4;
        }
    }
    ctx->pc = 0x306698u;
label_306698:
    // 0x306698: 0xc0c1b0c  jal         func_306C30
    ctx->pc = 0x306698u;
    SET_GPR_U32(ctx, 31, 0x3066A0u);
    ctx->pc = 0x30669Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306698u;
    // 0x30669c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306C30u, 0x306698u, 0x3066A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3066A0u;
label_3066a0:
    // 0x3066a0: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x3066a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_3066a4:
    // 0x3066a4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3066a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3066a8: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x3066a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x3066ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3066acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3066b0:
    // 0x3066b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3066b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3066b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3066b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3066b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3066B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3066BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3066B8u;
        // 0x3066bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3066B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3066C0u;
}
