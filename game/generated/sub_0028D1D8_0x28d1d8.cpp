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

// Function: sub_0028D1D8
// Address: 0x28d1d8 - 0x28d4c0
void sub_0028D1D8_0x28d1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D1D8_0x28d1d8");
#endif

    switch (ctx->pc) {
        case 0x28d238u: goto label_28d238;
        case 0x28d250u: goto label_28d250;
        case 0x28d268u: goto label_28d268;
        case 0x28d278u: goto label_28d278;
        case 0x28d288u: goto label_28d288;
        case 0x28d298u: goto label_28d298;
        case 0x28d2a8u: goto label_28d2a8;
        case 0x28d2bcu: goto label_28d2bc;
        case 0x28d2ccu: goto label_28d2cc;
        case 0x28d2dcu: goto label_28d2dc;
        case 0x28d2ecu: goto label_28d2ec;
        case 0x28d2fcu: goto label_28d2fc;
        case 0x28d30cu: goto label_28d30c;
        case 0x28d31cu: goto label_28d31c;
        case 0x28d32cu: goto label_28d32c;
        case 0x28d340u: goto label_28d340;
        case 0x28d370u: goto label_28d370;
        case 0x28d3a0u: goto label_28d3a0;
        case 0x28d3d0u: goto label_28d3d0;
        case 0x28d400u: goto label_28d400;
        case 0x28d430u: goto label_28d430;
        case 0x28d460u: goto label_28d460;
        case 0x28d494u: goto label_28d494;
        default: break;
    }

    ctx->pc = 0x28d1d8u;

    // 0x28d1d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28d1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28d1dc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x28d1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x28d1e0: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x28d1e0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
    // 0x28d1e4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x28d1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x28d1e8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x28d1e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d1ec: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x28d1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x28d1f0: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x28d1f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d1f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28d1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28d1f8: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x28d1f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x28d1fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28d1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28d200: 0x3c110048  lui         $s1, 0x48
    ctx->pc = 0x28d200u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
    // 0x28d204: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28d204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28d208: 0x3c120048  lui         $s2, 0x48
    ctx->pc = 0x28d208u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
    // 0x28d20c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x28d20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x28d210: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x28d210u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
    // 0x28d214: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x28d214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x28d218: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x28d218u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
    // 0x28d21c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x28d21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x28d220: 0x26b59fa0  addiu       $s5, $s5, -0x6060
    ctx->pc = 0x28d220u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942624));
    // 0x28d224: 0xaef60014  sw          $s6, 0x14($s7)
    ctx->pc = 0x28d224u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 20), GPR_U32(ctx, 22));
    // 0x28d228: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28d228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d22c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x28d22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d230: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28D230u;
    SET_GPR_U32(ctx, 31, 0x28D238u);
    ctx->pc = 0x28D234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D230u;
    // 0x28d234: 0x26949fb8  addiu       $s4, $s4, -0x6048 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294942648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28D230u, 0x28D238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D238u;
label_28d238:
    // 0x28d238: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28d238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d23c: 0xaee20018  sw          $v0, 0x18($s7)
    ctx->pc = 0x28d23cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 24), GPR_U32(ctx, 2));
    // 0x28d240: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28d240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d244: 0x26739fc8  addiu       $s3, $s3, -0x6038
    ctx->pc = 0x28d244u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942664));
    // 0x28d248: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28D248u;
    SET_GPR_U32(ctx, 31, 0x28D250u);
    ctx->pc = 0x28D24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D248u;
    // 0x28d24c: 0x26529fe0  addiu       $s2, $s2, -0x6020 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28D248u, 0x28D250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D250u;
label_28d250:
    // 0x28d250: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28d250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d254: 0xaee20020  sw          $v0, 0x20($s7)
    ctx->pc = 0x28d254u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 32), GPR_U32(ctx, 2));
    // 0x28d258: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28d258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d25c: 0x26109ff8  addiu       $s0, $s0, -0x6008
    ctx->pc = 0x28d25cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942712));
    // 0x28d260: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28D260u;
    SET_GPR_U32(ctx, 31, 0x28D268u);
    ctx->pc = 0x28D264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D260u;
    // 0x28d264: 0x2631a010  addiu       $s1, $s1, -0x5FF0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28D260u, 0x28D268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D268u;
label_28d268:
    // 0x28d268: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28d268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d26c: 0xaee2001c  sw          $v0, 0x1C($s7)
    ctx->pc = 0x28d26cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 28), GPR_U32(ctx, 2));
    // 0x28d270: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28D270u;
    SET_GPR_U32(ctx, 31, 0x28D278u);
    ctx->pc = 0x28D274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D270u;
    // 0x28d274: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28D270u, 0x28D278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D278u;
label_28d278:
    // 0x28d278: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28d278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d27c: 0xaee20024  sw          $v0, 0x24($s7)
    ctx->pc = 0x28d27cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 36), GPR_U32(ctx, 2));
    // 0x28d280: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28D280u;
    SET_GPR_U32(ctx, 31, 0x28D288u);
    ctx->pc = 0x28D284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D280u;
    // 0x28d284: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28D280u, 0x28D288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D288u;
label_28d288:
    // 0x28d288: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28d288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d28c: 0xaee20028  sw          $v0, 0x28($s7)
    ctx->pc = 0x28d28cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 40), GPR_U32(ctx, 2));
    // 0x28d290: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28D290u;
    SET_GPR_U32(ctx, 31, 0x28D298u);
    ctx->pc = 0x28D294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D290u;
    // 0x28d294: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28D290u, 0x28D298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D298u;
label_28d298:
    // 0x28d298: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28d298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d29c: 0xaee2002c  sw          $v0, 0x2C($s7)
    ctx->pc = 0x28d29cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 44), GPR_U32(ctx, 2));
    // 0x28d2a0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28D2A0u;
    SET_GPR_U32(ctx, 31, 0x28D2A8u);
    ctx->pc = 0x28D2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D2A0u;
    // 0x28d2a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28D2A0u, 0x28D2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D2A8u;
label_28d2a8:
    // 0x28d2a8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28d2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28d2ac: 0xaee20030  sw          $v0, 0x30($s7)
    ctx->pc = 0x28d2acu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 48), GPR_U32(ctx, 2));
    // 0x28d2b0: 0x24a5a028  addiu       $a1, $a1, -0x5FD8
    ctx->pc = 0x28d2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942760));
    // 0x28d2b4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28D2B4u;
    SET_GPR_U32(ctx, 31, 0x28D2BCu);
    ctx->pc = 0x28D2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D2B4u;
    // 0x28d2b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28D2B4u, 0x28D2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D2BCu;
label_28d2bc:
    // 0x28d2bc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28d2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d2c0: 0xaee20034  sw          $v0, 0x34($s7)
    ctx->pc = 0x28d2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 52), GPR_U32(ctx, 2));
    // 0x28d2c4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28D2C4u;
    SET_GPR_U32(ctx, 31, 0x28D2CCu);
    ctx->pc = 0x28D2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D2C4u;
    // 0x28d2c8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28D2C4u, 0x28D2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D2CCu;
label_28d2cc:
    // 0x28d2cc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28d2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d2d0: 0xaee20038  sw          $v0, 0x38($s7)
    ctx->pc = 0x28d2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 56), GPR_U32(ctx, 2));
    // 0x28d2d4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28D2D4u;
    SET_GPR_U32(ctx, 31, 0x28D2DCu);
    ctx->pc = 0x28D2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D2D4u;
    // 0x28d2d8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28D2D4u, 0x28D2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D2DCu;
label_28d2dc:
    // 0x28d2dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28d2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d2e0: 0xaee20040  sw          $v0, 0x40($s7)
    ctx->pc = 0x28d2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 64), GPR_U32(ctx, 2));
    // 0x28d2e4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28D2E4u;
    SET_GPR_U32(ctx, 31, 0x28D2ECu);
    ctx->pc = 0x28D2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D2E4u;
    // 0x28d2e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28D2E4u, 0x28D2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D2ECu;
label_28d2ec:
    // 0x28d2ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28d2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d2f0: 0xaee2003c  sw          $v0, 0x3C($s7)
    ctx->pc = 0x28d2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 60), GPR_U32(ctx, 2));
    // 0x28d2f4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28D2F4u;
    SET_GPR_U32(ctx, 31, 0x28D2FCu);
    ctx->pc = 0x28D2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D2F4u;
    // 0x28d2f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28D2F4u, 0x28D2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D2FCu;
label_28d2fc:
    // 0x28d2fc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28d2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d300: 0xaee20044  sw          $v0, 0x44($s7)
    ctx->pc = 0x28d300u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 68), GPR_U32(ctx, 2));
    // 0x28d304: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28D304u;
    SET_GPR_U32(ctx, 31, 0x28D30Cu);
    ctx->pc = 0x28D308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D304u;
    // 0x28d308: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28D304u, 0x28D30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D30Cu;
label_28d30c:
    // 0x28d30c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28d30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d310: 0xaee20048  sw          $v0, 0x48($s7)
    ctx->pc = 0x28d310u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 72), GPR_U32(ctx, 2));
    // 0x28d314: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28D314u;
    SET_GPR_U32(ctx, 31, 0x28D31Cu);
    ctx->pc = 0x28D318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D314u;
    // 0x28d318: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28D314u, 0x28D31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D31Cu;
label_28d31c:
    // 0x28d31c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28d31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d320: 0xaee2004c  sw          $v0, 0x4C($s7)
    ctx->pc = 0x28d320u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 76), GPR_U32(ctx, 2));
    // 0x28d324: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28D324u;
    SET_GPR_U32(ctx, 31, 0x28D32Cu);
    ctx->pc = 0x28D328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D324u;
    // 0x28d328: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28D324u, 0x28D32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D32Cu;
label_28d32c:
    // 0x28d32c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28d32cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28d330: 0xaee20050  sw          $v0, 0x50($s7)
    ctx->pc = 0x28d330u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 80), GPR_U32(ctx, 2));
    // 0x28d334: 0x24a5a038  addiu       $a1, $a1, -0x5FC8
    ctx->pc = 0x28d334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942776));
    // 0x28d338: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28D338u;
    SET_GPR_U32(ctx, 31, 0x28D340u);
    ctx->pc = 0x28D33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D338u;
    // 0x28d33c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28D338u, 0x28D340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D340u;
label_28d340:
    // 0x28d340: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28D340u;
    {
        const bool branch_taken_0x28d340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D340u;
        // 0x28d344: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d340) {
            ctx->pc = 0x28D364u;
            goto label_28d364;
        }
    }
    ctx->pc = 0x28D348u;
    // 0x28d348: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28d348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28d34c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D34Cu;
    {
        const bool branch_taken_0x28d34c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D34Cu;
        // 0x28d350: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d34c) {
            ctx->pc = 0x28D364u;
            goto label_28d364;
        }
    }
    ctx->pc = 0x28D354u;
    // 0x28d354: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28d354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28d358: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28d358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28d35c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28d35cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x28d360: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28d360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28d364:
    // 0x28d364: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28d364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d368: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28D368u;
    SET_GPR_U32(ctx, 31, 0x28D370u);
    ctx->pc = 0x28D36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D368u;
    // 0x28d36c: 0x24a5a048  addiu       $a1, $a1, -0x5FB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28D368u, 0x28D370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D370u;
label_28d370:
    // 0x28d370: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28D370u;
    {
        const bool branch_taken_0x28d370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d370) {
            ctx->pc = 0x28D374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D370u;
            // 0x28d374: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D394u;
            goto label_28d394;
        }
    }
    ctx->pc = 0x28D378u;
    // 0x28d378: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28d378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28d37c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D37Cu;
    {
        const bool branch_taken_0x28d37c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D37Cu;
        // 0x28d380: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d37c) {
            ctx->pc = 0x28D390u;
            goto label_28d390;
        }
    }
    ctx->pc = 0x28D384u;
    // 0x28d384: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28d384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28d388: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28d388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28d38c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28d38cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28d390:
    // 0x28d390: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28d390u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28d394:
    // 0x28d394: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28d394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d398: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28D398u;
    SET_GPR_U32(ctx, 31, 0x28D3A0u);
    ctx->pc = 0x28D39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D398u;
    // 0x28d39c: 0x24a5a058  addiu       $a1, $a1, -0x5FA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28D398u, 0x28D3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D3A0u;
label_28d3a0:
    // 0x28d3a0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28D3A0u;
    {
        const bool branch_taken_0x28d3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d3a0) {
            ctx->pc = 0x28D3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D3A0u;
            // 0x28d3a4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D3C4u;
            goto label_28d3c4;
        }
    }
    ctx->pc = 0x28D3A8u;
    // 0x28d3a8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28d3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28d3ac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D3ACu;
    {
        const bool branch_taken_0x28d3ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D3ACu;
        // 0x28d3b0: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d3ac) {
            ctx->pc = 0x28D3C0u;
            goto label_28d3c0;
        }
    }
    ctx->pc = 0x28D3B4u;
    // 0x28d3b4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28d3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28d3b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28d3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28d3bc: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28d3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28d3c0:
    // 0x28d3c0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28d3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28d3c4:
    // 0x28d3c4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28d3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d3c8: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28D3C8u;
    SET_GPR_U32(ctx, 31, 0x28D3D0u);
    ctx->pc = 0x28D3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D3C8u;
    // 0x28d3cc: 0x24a5a070  addiu       $a1, $a1, -0x5F90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28D3C8u, 0x28D3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D3D0u;
label_28d3d0:
    // 0x28d3d0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28D3D0u;
    {
        const bool branch_taken_0x28d3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d3d0) {
            ctx->pc = 0x28D3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D3D0u;
            // 0x28d3d4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D3F4u;
            goto label_28d3f4;
        }
    }
    ctx->pc = 0x28D3D8u;
    // 0x28d3d8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28d3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28d3dc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D3DCu;
    {
        const bool branch_taken_0x28d3dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D3DCu;
        // 0x28d3e0: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d3dc) {
            ctx->pc = 0x28D3F0u;
            goto label_28d3f0;
        }
    }
    ctx->pc = 0x28D3E4u;
    // 0x28d3e4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28d3e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28d3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28d3ec: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28d3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28d3f0:
    // 0x28d3f0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28d3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28d3f4:
    // 0x28d3f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28d3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d3f8: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28D3F8u;
    SET_GPR_U32(ctx, 31, 0x28D400u);
    ctx->pc = 0x28D3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D3F8u;
    // 0x28d3fc: 0x24a5a088  addiu       $a1, $a1, -0x5F78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28D3F8u, 0x28D400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D400u;
label_28d400:
    // 0x28d400: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28D400u;
    {
        const bool branch_taken_0x28d400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d400) {
            ctx->pc = 0x28D404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D400u;
            // 0x28d404: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D424u;
            goto label_28d424;
        }
    }
    ctx->pc = 0x28D408u;
    // 0x28d408: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28d408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28d40c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D40Cu;
    {
        const bool branch_taken_0x28d40c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D40Cu;
        // 0x28d410: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d40c) {
            ctx->pc = 0x28D420u;
            goto label_28d420;
        }
    }
    ctx->pc = 0x28D414u;
    // 0x28d414: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28d414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28d418: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28d418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28d41c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28d41cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28d420:
    // 0x28d420: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28d420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28d424:
    // 0x28d424: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28d424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d428: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28D428u;
    SET_GPR_U32(ctx, 31, 0x28D430u);
    ctx->pc = 0x28D42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D428u;
    // 0x28d42c: 0x24a5a0a8  addiu       $a1, $a1, -0x5F58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28D428u, 0x28D430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D430u;
label_28d430:
    // 0x28d430: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28D430u;
    {
        const bool branch_taken_0x28d430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d430) {
            ctx->pc = 0x28D434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D430u;
            // 0x28d434: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D454u;
            goto label_28d454;
        }
    }
    ctx->pc = 0x28D438u;
    // 0x28d438: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28d438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28d43c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D43Cu;
    {
        const bool branch_taken_0x28d43c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D43Cu;
        // 0x28d440: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d43c) {
            ctx->pc = 0x28D450u;
            goto label_28d450;
        }
    }
    ctx->pc = 0x28D444u;
    // 0x28d444: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28d444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28d448: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28d448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28d44c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28d44cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28d450:
    // 0x28d450: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28d450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_28d454:
    // 0x28d454: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28d454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d458: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28D458u;
    SET_GPR_U32(ctx, 31, 0x28D460u);
    ctx->pc = 0x28D45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D458u;
    // 0x28d45c: 0x24a5a0b8  addiu       $a1, $a1, -0x5F48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28D458u, 0x28D460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D460u;
label_28d460:
    // 0x28d460: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28D460u;
    {
        const bool branch_taken_0x28d460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d460) {
            ctx->pc = 0x28D464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D460u;
            // 0x28d464: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D484u;
            goto label_28d484;
        }
    }
    ctx->pc = 0x28D468u;
    // 0x28d468: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28d468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28d46c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D46Cu;
    {
        const bool branch_taken_0x28d46c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D46Cu;
        // 0x28d470: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d46c) {
            ctx->pc = 0x28D480u;
            goto label_28d480;
        }
    }
    ctx->pc = 0x28D474u;
    // 0x28d474: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28d474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28d478: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28d478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28d47c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28d47cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_28d480:
    // 0x28d480: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28d480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28d484:
    // 0x28d484: 0xaee00008  sw          $zero, 0x8($s7)
    ctx->pc = 0x28d484u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 0));
    // 0x28d488: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x28d488u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x28d48c: 0xc0a3530  jal         func_28D4C0
    ctx->pc = 0x28D48Cu;
    SET_GPR_U32(ctx, 31, 0x28D494u);
    ctx->pc = 0x28D490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D48Cu;
    // 0x28d490: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4C0u, 0x28D48Cu, 0x28D494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D494u;
label_28d494:
    // 0x28d494: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28d494u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d498: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28d498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28d49c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28d49cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d4a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x28d4a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28d4a4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x28d4a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d4a8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x28d4a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28d4ac: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x28d4acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28d4b0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x28d4b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x28d4b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28d4b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28d4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x28D4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D4B8u;
        // 0x28d4bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D4C0u;
}
