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

// Function: sub_00304070
// Address: 0x304070 - 0x304150
void sub_00304070_0x304070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304070_0x304070");
#endif

    switch (ctx->pc) {
        case 0x304098u: goto label_304098;
        case 0x3040b8u: goto label_3040b8;
        case 0x3040d0u: goto label_3040d0;
        case 0x3040f0u: goto label_3040f0;
        case 0x304118u: goto label_304118;
        case 0x304130u: goto label_304130;
        default: break;
    }

    ctx->pc = 0x304070u;

    // 0x304070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x304070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x304074: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x304074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x304078: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x304078u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30407c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30407cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x304080: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x304080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304084: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x304084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x304088: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x304088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x30408c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30408cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x304090: 0xc0c10da  jal         func_304368
    ctx->pc = 0x304090u;
    SET_GPR_U32(ctx, 31, 0x304098u);
    ctx->pc = 0x304094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304090u;
    // 0x304094: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304368u, 0x304090u, 0x304098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304098u;
label_304098:
    // 0x304098: 0x52400026  beql        $s2, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x304098u;
    {
        const bool branch_taken_0x304098 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x304098) {
            ctx->pc = 0x30409Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304098u;
            // 0x30409c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304134u;
            goto label_304134;
        }
    }
    ctx->pc = 0x3040A0u;
    // 0x3040a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3040a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3040a4: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x3040A4u;
    {
        const bool branch_taken_0x3040a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3040a4) {
            ctx->pc = 0x3040A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3040A4u;
            // 0x3040a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304134u;
            goto label_304134;
        }
    }
    ctx->pc = 0x3040ACu;
    // 0x3040ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3040acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3040b0: 0xc0be9f2  jal         func_2FA7C8
    ctx->pc = 0x3040B0u;
    SET_GPR_U32(ctx, 31, 0x3040B8u);
    ctx->pc = 0x3040B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3040B0u;
    // 0x3040b4: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA7C8u, 0x3040B0u, 0x3040B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3040B8u;
label_3040b8:
    // 0x3040b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3040b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3040bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3040bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3040c0: 0x12130009  beq         $s0, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3040C0u;
    {
        const bool branch_taken_0x3040c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x3040C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3040C0u;
        // 0x3040c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3040c0) {
            ctx->pc = 0x3040E8u;
            goto label_3040e8;
        }
    }
    ctx->pc = 0x3040C8u;
    // 0x3040c8: 0xc0c8db4  jal         func_3236D0
    ctx->pc = 0x3040C8u;
    SET_GPR_U32(ctx, 31, 0x3040D0u);
    ctx->pc = 0x3040CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3040C8u;
    // 0x3040cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3236D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3236D0u, 0x3040C8u, 0x3040D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3040D0u;
label_3040d0:
    // 0x3040d0: 0x4420018  bltzl       $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3040D0u;
    {
        const bool branch_taken_0x3040d0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3040d0) {
            ctx->pc = 0x3040D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3040D0u;
            // 0x3040d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304134u;
            goto label_304134;
        }
    }
    ctx->pc = 0x3040D8u;
    // 0x3040d8: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x3040d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x3040dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3040DCu;
    {
        const bool branch_taken_0x3040dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3040E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3040DCu;
        // 0x3040e0: 0xae33000c  sw          $s3, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3040dc) {
            ctx->pc = 0x304100u;
            goto label_304100;
        }
    }
    ctx->pc = 0x3040E4u;
    // 0x3040e4: 0x0  nop
    ctx->pc = 0x3040e4u;
    // NOP
label_3040e8:
    // 0x3040e8: 0xc0c8dc0  jal         func_323700
    ctx->pc = 0x3040E8u;
    SET_GPR_U32(ctx, 31, 0x3040F0u);
    ctx->pc = 0x323700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323700u, 0x3040E8u, 0x3040F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3040F0u;
label_3040f0:
    // 0x3040f0: 0x4420010  bltzl       $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3040F0u;
    {
        const bool branch_taken_0x3040f0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3040f0) {
            ctx->pc = 0x3040F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3040F0u;
            // 0x3040f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304134u;
            goto label_304134;
        }
    }
    ctx->pc = 0x3040F8u;
    // 0x3040f8: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x3040f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x3040fc: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x3040fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_304100:
    // 0x304100: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x304100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x304104: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x304104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x304108: 0x8e26003c  lw          $a2, 0x3C($s1)
    ctx->pc = 0x304108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x30410c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30410cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304110: 0xc0bee6c  jal         func_2FB9B0
    ctx->pc = 0x304110u;
    SET_GPR_U32(ctx, 31, 0x304118u);
    ctx->pc = 0x304114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304110u;
    // 0x304114: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9B0u, 0x304110u, 0x304118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304118u;
label_304118:
    // 0x304118: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x304118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x30411c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30411cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304120: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x304120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x304124: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x304124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x304128: 0xc0bef86  jal         func_2FBE18
    ctx->pc = 0x304128u;
    SET_GPR_U32(ctx, 31, 0x304130u);
    ctx->pc = 0x30412Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304128u;
    // 0x30412c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE18u, 0x304128u, 0x304130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304130u;
label_304130:
    // 0x304130: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x304130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_304134:
    // 0x304134: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x304134u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x304138: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x304138u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30413c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x30413cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304140: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x304140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x304144: 0x3e00008  jr          $ra
    ctx->pc = 0x304144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304144u;
        // 0x304148: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30414Cu;
    // 0x30414c: 0x0  nop
    ctx->pc = 0x30414cu;
    // NOP
    ctx->pc = 0x304150u;
}
