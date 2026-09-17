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

// Function: sub_00326CF0
// Address: 0x326cf0 - 0x326d78
void sub_00326CF0_0x326cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326CF0_0x326cf0");
#endif

    switch (ctx->pc) {
        case 0x326d60u: goto label_326d60;
        default: break;
    }

    ctx->pc = 0x326cf0u;

    // 0x326cf0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x326cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x326cf4: 0x3c070002  lui         $a3, 0x2
    ctx->pc = 0x326cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2 << 16));
    // 0x326cf8: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x326cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
    // 0x326cfc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326cfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x326d00: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x326d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x326d04: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x326d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x326d08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x326d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x326d0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x326d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x326d10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x326d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x326d14: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x326d14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x326d18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x326d18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326d1c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x326d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x326d20: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x326d20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x326d24: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x326d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x326d28: 0x70452b89  pcpyld      $a1, $v0, $a1
    ctx->pc = 0x326d28u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x326d2c: 0x7e050000  sq          $a1, 0x0($s0)
    ctx->pc = 0x326d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 5));
    // 0x326d30: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x326d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x326d34: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x326d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x326d38: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x326d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x326d3c: 0x2442cb00  addiu       $v0, $v0, -0x3500
    ctx->pc = 0x326d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953728));
    // 0x326d40: 0x2463dec0  addiu       $v1, $v1, -0x2140
    ctx->pc = 0x326d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958784));
    // 0x326d44: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x326d44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x326d48: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x326d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x326d4c: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x326d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x326d50: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x326d50u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x326d54: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x326d54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x326d58: 0xc0d0b7e  jal         func_342DF8
    ctx->pc = 0x326D58u;
    SET_GPR_U32(ctx, 31, 0x326D60u);
    ctx->pc = 0x326D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326D58u;
    // 0x326d5c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342DF8u, 0x326D58u, 0x326D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326D60u;
label_326d60:
    // 0x326d60: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x326d60u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x326d64: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x326d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x326d68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x326d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x326d6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x326d6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326d70: 0x3e00008  jr          $ra
    ctx->pc = 0x326D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D70u;
        // 0x326d74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326D78u;
}
