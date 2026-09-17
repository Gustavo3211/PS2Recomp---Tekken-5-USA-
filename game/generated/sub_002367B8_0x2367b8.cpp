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

// Function: sub_002367B8
// Address: 0x2367b8 - 0x236858
void sub_002367B8_0x2367b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002367B8_0x2367b8");
#endif

    switch (ctx->pc) {
        case 0x2367dcu: goto label_2367dc;
        case 0x236808u: goto label_236808;
        case 0x236814u: goto label_236814;
        default: break;
    }

    ctx->pc = 0x2367b8u;

    // 0x2367b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2367b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2367bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2367bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2367c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2367c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2367c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2367c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2367c8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2367c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2367cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2367ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2367d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2367d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2367d4: 0xc08cbf6  jal         func_232FD8
    ctx->pc = 0x2367D4u;
    SET_GPR_U32(ctx, 31, 0x2367DCu);
    ctx->pc = 0x2367D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2367D4u;
    // 0x2367d8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232FD8u, 0x2367D4u, 0x2367DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2367DCu;
label_2367dc:
    // 0x2367dc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2367dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2367e0: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x2367e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x2367e4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2367e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2367e8: 0xae510014  sw          $s1, 0x14($s2)
    ctx->pc = 0x2367e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 17));
    // 0x2367ec: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x2367ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2367f0: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x2367f0u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2367f4: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2367F4u;
    {
        const bool branch_taken_0x2367f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2367f4) {
            ctx->pc = 0x2367F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2367F4u;
            // 0x2367f8: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2367FCu;
            goto label_2367fc;
        }
    }
    ctx->pc = 0x2367FCu;
label_2367fc:
    // 0x2367fc: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x2367fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x236800: 0xc0972c8  jal         func_25CB20
    ctx->pc = 0x236800u;
    SET_GPR_U32(ctx, 31, 0x236808u);
    ctx->pc = 0x236804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236800u;
    // 0x236804: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB20u, 0x236800u, 0x236808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236808u;
label_236808:
    // 0x236808: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x236808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x23680c: 0xc08c686  jal         func_231A18
    ctx->pc = 0x23680Cu;
    SET_GPR_U32(ctx, 31, 0x236814u);
    ctx->pc = 0x236810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23680Cu;
    // 0x236810: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A18u, 0x23680Cu, 0x236814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236814u;
label_236814:
    // 0x236814: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236818: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236818u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23681c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23681cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236820: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x236820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x236824: 0x3e00008  jr          $ra
    ctx->pc = 0x236824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236824u;
        // 0x236828: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23682Cu;
    // 0x23682c: 0x0  nop
    ctx->pc = 0x23682cu;
    // NOP
    // 0x236830: 0x8ca70894  lw          $a3, 0x894($a1)
    ctx->pc = 0x236830u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2196)));
    // 0x236834: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x236834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x236838: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x236838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x23683c: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x23683cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x236840: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x236840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x236844: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x236844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x236848: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x236848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23684c: 0x3e00008  jr          $ra
    ctx->pc = 0x23684Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23684Cu;
        // 0x236850: 0x7c450070  sq          $a1, 0x70($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 112), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23684Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236854u;
    // 0x236854: 0x0  nop
    ctx->pc = 0x236854u;
    // NOP
    ctx->pc = 0x236858u;
}
