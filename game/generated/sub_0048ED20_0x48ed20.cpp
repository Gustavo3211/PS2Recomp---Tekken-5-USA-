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

// Function: sub_0048ED20
// Address: 0x48ed20 - 0x48edc0
void sub_0048ED20_0x48ed20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048ED20_0x48ed20");
#endif

    switch (ctx->pc) {
        case 0x48ed40u: goto label_48ed40;
        default: break;
    }

    ctx->pc = 0x48ed20u;

    // 0x48ed20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48ed20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48ed24: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x48ed24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x48ed28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48ed28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48ed2c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x48ed2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x48ed30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48ed30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48ed34: 0x8123bd2  j           func_48EF48
    ctx->pc = 0x48ED34u;
    ctx->pc = 0x48ED38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48ED34u;
    // 0x48ed38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF48u;
    sub_0048EF48_0x48ef48(rdram, ctx, runtime); return;
    ctx->pc = 0x48ED3Cu;
    // 0x48ed3c: 0x0  nop
    ctx->pc = 0x48ed3cu;
    // NOP
label_48ed40:
    // 0x48ed40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48ed40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48ed44: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x48ed44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x48ed48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48ed48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48ed4c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x48ed4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x48ed50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48ed50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48ed54: 0x8123bd2  j           func_48EF48
    ctx->pc = 0x48ED54u;
    ctx->pc = 0x48ED58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48ED54u;
    // 0x48ed58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF48u;
    sub_0048EF48_0x48ef48(rdram, ctx, runtime); return;
    ctx->pc = 0x48ED5Cu;
    // 0x48ed5c: 0x0  nop
    ctx->pc = 0x48ed5cu;
    // NOP
    // 0x48ed60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48ed60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48ed64: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x48ed64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x48ed68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48ed68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48ed6c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x48ed6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x48ed70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48ed70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48ed74: 0x8123bd2  j           func_48EF48
    ctx->pc = 0x48ED74u;
    ctx->pc = 0x48ED78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48ED74u;
    // 0x48ed78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF48u;
    sub_0048EF48_0x48ef48(rdram, ctx, runtime); return;
    ctx->pc = 0x48ED7Cu;
    // 0x48ed7c: 0x0  nop
    ctx->pc = 0x48ed7cu;
    // NOP
    // 0x48ed80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48ed80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48ed84: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x48ed84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x48ed88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48ed88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48ed8c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x48ed8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x48ed90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48ed90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48ed94: 0x8123bd2  j           func_48EF48
    ctx->pc = 0x48ED94u;
    ctx->pc = 0x48ED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48ED94u;
    // 0x48ed98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF48u;
    sub_0048EF48_0x48ef48(rdram, ctx, runtime); return;
    ctx->pc = 0x48ED9Cu;
    // 0x48ed9c: 0x0  nop
    ctx->pc = 0x48ed9cu;
    // NOP
    // 0x48eda0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48eda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48eda4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x48eda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48eda8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48eda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48edac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x48edacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x48edb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48edb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48edb4: 0x8123bd2  j           func_48EF48
    ctx->pc = 0x48EDB4u;
    ctx->pc = 0x48EDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48EDB4u;
    // 0x48edb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF48u;
    sub_0048EF48_0x48ef48(rdram, ctx, runtime); return;
    ctx->pc = 0x48EDBCu;
    // 0x48edbc: 0x0  nop
    ctx->pc = 0x48edbcu;
    // NOP
    ctx->pc = 0x48edc0u;
}
