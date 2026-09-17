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

// Function: sub_002839E0
// Address: 0x2839e0 - 0x283a50
void sub_002839E0_0x2839e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002839E0_0x2839e0");
#endif

    switch (ctx->pc) {
        case 0x2839f0u: goto label_2839f0;
        default: break;
    }

    ctx->pc = 0x2839e0u;

    // 0x2839e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2839e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2839e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2839e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2839e8: 0xc0b22e6  jal         func_2C8B98
    ctx->pc = 0x2839E8u;
    SET_GPR_U32(ctx, 31, 0x2839F0u);
    ctx->pc = 0x2839ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2839E8u;
    // 0x2839ec: 0x9484003c  lhu         $a0, 0x3C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8B98u, 0x2839E8u, 0x2839F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2839F0u;
label_2839f0:
    // 0x2839f0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2839f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2839f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2839f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2839f8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2839f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2839fc: 0x8c4483f8  lw          $a0, -0x7C08($v0)
    ctx->pc = 0x2839fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A83F8u));
    // 0x283a00: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x283A00u;
    {
        const bool branch_taken_0x283a00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x283A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A00u;
        // 0x283a04: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a00) {
            ctx->pc = 0x283A10u;
            goto label_283a10;
        }
    }
    ctx->pc = 0x283A08u;
    // 0x283a08: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x283A08u;
    {
        const bool branch_taken_0x283a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A08u;
        // 0x283a0c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a08) {
            ctx->pc = 0x283A38u;
            goto label_283a38;
        }
    }
    ctx->pc = 0x283A10u;
label_283a10:
    // 0x283a10: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283A10u;
    {
        const bool branch_taken_0x283a10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x283A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A10u;
        // 0x283a14: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a10) {
            ctx->pc = 0x283A20u;
            goto label_283a20;
        }
    }
    ctx->pc = 0x283A18u;
    // 0x283a18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x283A18u;
    {
        const bool branch_taken_0x283a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A18u;
        // 0x283a1c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a18) {
            ctx->pc = 0x283A38u;
            goto label_283a38;
        }
    }
    ctx->pc = 0x283A20u;
label_283a20:
    // 0x283a20: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283A20u;
    {
        const bool branch_taken_0x283a20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x283A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A20u;
        // 0x283a24: 0x38830007  xori        $v1, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a20) {
            ctx->pc = 0x283A30u;
            goto label_283a30;
        }
    }
    ctx->pc = 0x283A28u;
    // 0x283a28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x283A28u;
    {
        const bool branch_taken_0x283a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A28u;
        // 0x283a2c: 0x24a50003  addiu       $a1, $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a28) {
            ctx->pc = 0x283A38u;
            goto label_283a38;
        }
    }
    ctx->pc = 0x283A30u;
label_283a30:
    // 0x283a30: 0x24a20006  addiu       $v0, $a1, 0x6
    ctx->pc = 0x283a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x283a34: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x283a34u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_283a38:
    // 0x283a38: 0x28a2001a  slti        $v0, $a1, 0x1A
    ctx->pc = 0x283a38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x283a3c: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x283a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x283a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x283a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283a44: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x283a44u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x283a48: 0x80a0e5a  j           func_283968
    ctx->pc = 0x283A48u;
    ctx->pc = 0x283A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283A48u;
    // 0x283a4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283968u;
    sub_00283968_0x283968(rdram, ctx, runtime); return;
    ctx->pc = 0x283A50u;
}
