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

// Function: sub_002EB640
// Address: 0x2eb640 - 0x2eb6f0
void sub_002EB640_0x2eb640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB640_0x2eb640");
#endif

    switch (ctx->pc) {
        case 0x2eb668u: goto label_2eb668;
        case 0x2eb69cu: goto label_2eb69c;
        case 0x2eb6d4u: goto label_2eb6d4;
        default: break;
    }

    ctx->pc = 0x2eb640u;

    // 0x2eb640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2eb640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2eb644: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2eb644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2eb648: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2eb648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2eb64c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2eb64cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb650: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eb650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eb654: 0x263000b8  addiu       $s0, $s1, 0xB8
    ctx->pc = 0x2eb654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
    // 0x2eb658: 0x24a505c0  addiu       $a1, $a1, 0x5C0
    ctx->pc = 0x2eb658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1472));
    // 0x2eb65c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2eb65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2eb660: 0xc0bbdbc  jal         func_2EF6F0
    ctx->pc = 0x2EB660u;
    SET_GPR_U32(ctx, 31, 0x2EB668u);
    ctx->pc = 0x2EB664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB660u;
    // 0x2eb664: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF6F0u, 0x2EB660u, 0x2EB668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB668u;
label_2eb668:
    // 0x2eb668: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2eb668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2eb66c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2eb66cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2eb670: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EB670u;
    {
        const bool branch_taken_0x2eb670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB670u;
        // 0x2eb674: 0x24a505f8  addiu       $a1, $a1, 0x5F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb670) {
            ctx->pc = 0x2EB688u;
            goto label_2eb688;
        }
    }
    ctx->pc = 0x2EB678u;
    // 0x2eb678: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2eb678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2eb67c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2eb67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2eb680: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EB680u;
    {
        const bool branch_taken_0x2eb680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eb680) {
            ctx->pc = 0x2EB694u;
            goto label_2eb694;
        }
    }
    ctx->pc = 0x2EB688u;
label_2eb688:
    // 0x2eb688: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2eb688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2eb68c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eb68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb690: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2eb690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2eb694:
    // 0x2eb694: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2EB694u;
    SET_GPR_U32(ctx, 31, 0x2EB69Cu);
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2EB694u, 0x2EB69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB69Cu;
label_2eb69c:
    // 0x2eb69c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2eb69cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2eb6a0: 0xae220120  sw          $v0, 0x120($s1)
    ctx->pc = 0x2eb6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
    // 0x2eb6a4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2eb6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2eb6a8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EB6A8u;
    {
        const bool branch_taken_0x2eb6a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6A8u;
        // 0x2eb6ac: 0x24a5fed0  addiu       $a1, $a1, -0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb6a8) {
            ctx->pc = 0x2EB6C0u;
            goto label_2eb6c0;
        }
    }
    ctx->pc = 0x2EB6B0u;
    // 0x2eb6b0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2eb6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2eb6b4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2eb6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2eb6b8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EB6B8u;
    {
        const bool branch_taken_0x2eb6b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eb6b8) {
            ctx->pc = 0x2EB6CCu;
            goto label_2eb6cc;
        }
    }
    ctx->pc = 0x2EB6C0u;
label_2eb6c0:
    // 0x2eb6c0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2eb6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2eb6c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eb6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb6c8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2eb6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2eb6cc:
    // 0x2eb6cc: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2EB6CCu;
    SET_GPR_U32(ctx, 31, 0x2EB6D4u);
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2EB6CCu, 0x2EB6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB6D4u;
label_2eb6d4:
    // 0x2eb6d4: 0xae220124  sw          $v0, 0x124($s1)
    ctx->pc = 0x2eb6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
    // 0x2eb6d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eb6d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb6dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2eb6dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eb6e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2eb6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB6E4u;
        // 0x2eb6e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB6ECu;
    // 0x2eb6ec: 0x0  nop
    ctx->pc = 0x2eb6ecu;
    // NOP
    ctx->pc = 0x2eb6f0u;
}
