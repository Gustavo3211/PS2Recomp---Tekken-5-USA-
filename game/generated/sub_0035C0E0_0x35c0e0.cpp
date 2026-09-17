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

// Function: sub_0035C0E0
// Address: 0x35c0e0 - 0x35c130
void sub_0035C0E0_0x35c0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C0E0_0x35c0e0");
#endif

    switch (ctx->pc) {
        case 0x35c100u: goto label_35c100;
        default: break;
    }

    ctx->pc = 0x35c0e0u;

    // 0x35c0e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35c0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35c0e4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x35c0e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c0e8: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35c0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35c0ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35c0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35c0f0: 0x24482ab8  addiu       $t0, $v0, 0x2AB8
    ctx->pc = 0x35c0f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 10936));
    // 0x35c0f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35c0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c0f8: 0x24e60006  addiu       $a2, $a3, 0x6
    ctx->pc = 0x35c0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 6));
    // 0x35c0fc: 0x0  nop
    ctx->pc = 0x35c0fcu;
    // NOP
label_35c100:
    // 0x35c100: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x35c100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x35c104: 0xa82021  addu        $a0, $a1, $t0
    ctx->pc = 0x35c104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x35c108: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x35c108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35c10c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x35c10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x35c110: 0x28a20030  slti        $v0, $a1, 0x30
    ctx->pc = 0x35c110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x35c114: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35C114u;
    {
        const bool branch_taken_0x35c114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35C118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C114u;
        // 0x35c118: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c114) {
            ctx->pc = 0x35C100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c100;
        }
    }
    ctx->pc = 0x35C11Cu;
    // 0x35c11c: 0x84e40004  lh          $a0, 0x4($a3)
    ctx->pc = 0x35c11cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x35c120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35c120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c124: 0x80d8a96  j           func_362A58
    ctx->pc = 0x35C124u;
    ctx->pc = 0x35C128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C124u;
    // 0x35c128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362A58u;
    sub_00362A58_0x362a58(rdram, ctx, runtime); return;
    ctx->pc = 0x35C12Cu;
    // 0x35c12c: 0x0  nop
    ctx->pc = 0x35c12cu;
    // NOP
    ctx->pc = 0x35c130u;
}
