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

// Function: sub_00240850
// Address: 0x240850 - 0x24091c
void sub_00240850_0x240850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240850_0x240850");
#endif

    switch (ctx->pc) {
        case 0x24089cu: goto label_24089c;
        case 0x2408b0u: goto label_2408b0;
        case 0x2408c0u: goto label_2408c0;
        case 0x2408d0u: goto label_2408d0;
        case 0x2408e0u: goto label_2408e0;
        case 0x240914u: goto label_240914;
        default: break;
    }

    ctx->pc = 0x240850u;

    // 0x240850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x240854: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x240854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x240858: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x240858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24085c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24085cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x240860: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x240860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x240864: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x240864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x240868: 0x2c43000a  sltiu       $v1, $v0, 0xA
    ctx->pc = 0x240868u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x24086c: 0x5060002c  beql        $v1, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x24086Cu;
    {
        const bool branch_taken_0x24086c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24086c) {
            ctx->pc = 0x240870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24086Cu;
            // 0x240870: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240920u;
            return;
        }
    }
    ctx->pc = 0x240874u;
    // 0x240874: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x240874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x240878: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x240878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x24087c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24087cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240880: 0x8c630250  lw          $v1, 0x250($v1)
    ctx->pc = 0x240880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x240884: 0x600008  jr          $v1
    ctx->pc = 0x240884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240890u: goto label_240890;
            case 0x2408A8u: goto label_2408a8;
            case 0x2408B8u: goto label_2408b8;
            case 0x2408C8u: goto label_2408c8;
            case 0x2408D8u: goto label_2408d8;
            case 0x2408E8u: goto label_2408e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240884u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24088Cu;
    // 0x24088c: 0x0  nop
    ctx->pc = 0x24088cu;
    // NOP
label_240890:
    // 0x240890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240894: 0xc090120  jal         func_240480
    ctx->pc = 0x240894u;
    SET_GPR_U32(ctx, 31, 0x24089Cu);
    ctx->pc = 0x240898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240894u;
    // 0x240898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240480u, 0x240894u, 0x24089Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24089Cu;
label_24089c:
    // 0x24089c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x24089Cu;
    {
        const bool branch_taken_0x24089c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2408A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24089Cu;
        // 0x2408a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24089c) {
            ctx->pc = 0x240920u;
            return;
        }
    }
    ctx->pc = 0x2408A4u;
    // 0x2408a4: 0x0  nop
    ctx->pc = 0x2408a4u;
    // NOP
label_2408a8:
    // 0x2408a8: 0xc09014a  jal         func_240528
    ctx->pc = 0x2408A8u;
    SET_GPR_U32(ctx, 31, 0x2408B0u);
    ctx->pc = 0x2408ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2408A8u;
    // 0x2408ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240528u, 0x2408A8u, 0x2408B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2408B0u;
label_2408b0:
    // 0x2408b0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2408B0u;
    {
        const bool branch_taken_0x2408b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2408B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2408B0u;
        // 0x2408b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2408b0) {
            ctx->pc = 0x240920u;
            return;
        }
    }
    ctx->pc = 0x2408B8u;
label_2408b8:
    // 0x2408b8: 0xc09017a  jal         func_2405E8
    ctx->pc = 0x2408B8u;
    SET_GPR_U32(ctx, 31, 0x2408C0u);
    ctx->pc = 0x2408BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2408B8u;
    // 0x2408bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2405E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2405E8u, 0x2408B8u, 0x2408C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2408C0u;
label_2408c0:
    // 0x2408c0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2408C0u;
    {
        const bool branch_taken_0x2408c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2408C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2408C0u;
        // 0x2408c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2408c0) {
            ctx->pc = 0x240920u;
            return;
        }
    }
    ctx->pc = 0x2408C8u;
label_2408c8:
    // 0x2408c8: 0xc09018a  jal         func_240628
    ctx->pc = 0x2408C8u;
    SET_GPR_U32(ctx, 31, 0x2408D0u);
    ctx->pc = 0x2408CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2408C8u;
    // 0x2408cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240628u, 0x2408C8u, 0x2408D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2408D0u;
label_2408d0:
    // 0x2408d0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2408D0u;
    {
        const bool branch_taken_0x2408d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2408D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2408D0u;
        // 0x2408d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2408d0) {
            ctx->pc = 0x240920u;
            return;
        }
    }
    ctx->pc = 0x2408D8u;
label_2408d8:
    // 0x2408d8: 0xc0901da  jal         func_240768
    ctx->pc = 0x2408D8u;
    SET_GPR_U32(ctx, 31, 0x2408E0u);
    ctx->pc = 0x2408DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2408D8u;
    // 0x2408dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240768u, 0x2408D8u, 0x2408E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2408E0u;
label_2408e0:
    // 0x2408e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2408E0u;
    {
        const bool branch_taken_0x2408e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2408E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2408E0u;
        // 0x2408e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2408e0) {
            ctx->pc = 0x240920u;
            return;
        }
    }
    ctx->pc = 0x2408E8u;
label_2408e8:
    // 0x2408e8: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2408e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2408ec: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2408ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2408f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2408f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2408f4: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x2408f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x2408f8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2408f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2408fc: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x2408fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x240900: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x240900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240904: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x240904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240908: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x240908u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24090c: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x24090Cu;
    SET_GPR_U32(ctx, 31, 0x240914u);
    ctx->pc = 0x240910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24090Cu;
    // 0x240910: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x24090Cu, 0x240914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240914u;
label_240914:
    // 0x240914: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x240914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x240918: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x240918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    ctx->pc = 0x24091cu;
}
