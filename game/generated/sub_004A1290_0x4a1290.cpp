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

// Function: sub_004A1290
// Address: 0x4a1290 - 0x4a12e8
void sub_004A1290_0x4a1290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A1290_0x4a1290");
#endif

    switch (ctx->pc) {
        case 0x4a12c4u: goto label_4a12c4;
        default: break;
    }

    ctx->pc = 0x4a1290u;

    // 0x4a1290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a1290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a1294: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4a1294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4a1298: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4a1298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4a129c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4a129cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a12a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a12a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a12a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4a12a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4a12a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a12a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a12ac: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x4a12acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a12b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4a12b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4a12b4: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x4a12b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x4a12b8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4a12b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x4a12bc: 0xc128452  jal         func_4A1148
    ctx->pc = 0x4A12BCu;
    SET_GPR_U32(ctx, 31, 0x4A12C4u);
    ctx->pc = 0x4A12C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A12BCu;
    // 0x4a12c0: 0xa462d718  sh          $v0, -0x28E8($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294956824), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1148u, 0x4A12BCu, 0x4A12C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A12C4u;
label_4a12c4:
    // 0x4a12c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4a12c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a12c8: 0xae500070  sw          $s0, 0x70($s2)
    ctx->pc = 0x4a12c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 16));
    // 0x4a12cc: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x4a12ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x4a12d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4a12d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a12d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a12d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a12d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a12d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a12dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4A12DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A12E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A12DCu;
        // 0x4a12e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A12DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A12E4u;
    // 0x4a12e4: 0x0  nop
    ctx->pc = 0x4a12e4u;
    // NOP
    ctx->pc = 0x4a12e8u;
}
