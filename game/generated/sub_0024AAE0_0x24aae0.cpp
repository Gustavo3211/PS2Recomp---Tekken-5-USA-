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

// Function: sub_0024AAE0
// Address: 0x24aae0 - 0x24ab60
void sub_0024AAE0_0x24aae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AAE0_0x24aae0");
#endif

    switch (ctx->pc) {
        case 0x24ab08u: goto label_24ab08;
        default: break;
    }

    ctx->pc = 0x24aae0u;

    // 0x24aae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24aae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24aae4: 0x30c50fff  andi        $a1, $a2, 0xFFF
    ctx->pc = 0x24aae4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x24aae8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24aae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24aaec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24aaecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24aaf0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x24aaf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24aaf4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24aaf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aaf8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24aaf8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aafc: 0x809289a  j           func_24A268
    ctx->pc = 0x24AAFCu;
    ctx->pc = 0x24AB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AAFCu;
    // 0x24ab00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A268u;
    sub_0024A268_0x24a268(rdram, ctx, runtime); return;
    ctx->pc = 0x24AB04u;
    // 0x24ab04: 0x0  nop
    ctx->pc = 0x24ab04u;
    // NOP
label_24ab08:
    // 0x24ab08: 0x30c50fff  andi        $a1, $a2, 0xFFF
    ctx->pc = 0x24ab08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x24ab0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ab10: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24AB10u;
    {
        const bool branch_taken_0x24ab10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x24AB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB10u;
        // 0x24ab14: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab10) {
            ctx->pc = 0x24AB38u;
            goto label_24ab38;
        }
    }
    ctx->pc = 0x24AB18u;
    // 0x24ab18: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24AB18u;
    {
        const bool branch_taken_0x24ab18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB18u;
        // 0x24ab1c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab18) {
            ctx->pc = 0x24AB50u;
            goto label_24ab50;
        }
    }
    ctx->pc = 0x24AB20u;
    // 0x24ab20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24ab24: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24AB24u;
    {
        const bool branch_taken_0x24ab24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x24AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB24u;
        // 0x24ab28: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab24) {
            ctx->pc = 0x24AB48u;
            goto label_24ab48;
        }
    }
    ctx->pc = 0x24AB2Cu;
    // 0x24ab2c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24AB2Cu;
    {
        const bool branch_taken_0x24ab2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB2Cu;
        // 0x24ab30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab2c) {
            ctx->pc = 0x24AB54u;
            goto label_24ab54;
        }
    }
    ctx->pc = 0x24AB34u;
    // 0x24ab34: 0x0  nop
    ctx->pc = 0x24ab34u;
    // NOP
label_24ab38:
    // 0x24ab38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24ab38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ab3c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x24ab3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24ab40: 0x8090576  j           func_2415D8
    ctx->pc = 0x24AB40u;
    ctx->pc = 0x24AB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AB40u;
    // 0x24ab44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2415D8u;
    sub_002415D8_0x2415d8(rdram, ctx, runtime); return;
    ctx->pc = 0x24AB48u;
label_24ab48:
    // 0x24ab48: 0x8090576  j           func_2415D8
    ctx->pc = 0x24AB48u;
    ctx->pc = 0x24AB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AB48u;
    // 0x24ab4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2415D8u;
    sub_002415D8_0x2415d8(rdram, ctx, runtime); return;
    ctx->pc = 0x24AB50u;
label_24ab50:
    // 0x24ab50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24ab50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24ab54:
    // 0x24ab54: 0x8090576  j           func_2415D8
    ctx->pc = 0x24AB54u;
    ctx->pc = 0x24AB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AB54u;
    // 0x24ab58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2415D8u;
    sub_002415D8_0x2415d8(rdram, ctx, runtime); return;
    ctx->pc = 0x24AB5Cu;
    // 0x24ab5c: 0x0  nop
    ctx->pc = 0x24ab5cu;
    // NOP
    ctx->pc = 0x24ab60u;
}
