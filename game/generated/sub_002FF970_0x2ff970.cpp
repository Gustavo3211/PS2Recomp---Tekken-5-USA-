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

// Function: sub_002FF970
// Address: 0x2ff970 - 0x2ffa58
void sub_002FF970_0x2ff970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF970_0x2ff970");
#endif

    switch (ctx->pc) {
        case 0x2ff9b0u: goto label_2ff9b0;
        case 0x2ffa08u: goto label_2ffa08;
        default: break;
    }

    ctx->pc = 0x2ff970u;

    // 0x2ff970: 0x8c88003c  lw          $t0, 0x3C($a0)
    ctx->pc = 0x2ff970u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2ff974: 0x24a40720  addiu       $a0, $a1, 0x720
    ctx->pc = 0x2ff974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1824));
    // 0x2ff978: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2ff978u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ff97c: 0x24a606e0  addiu       $a2, $a1, 0x6E0
    ctx->pc = 0x2ff97cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1760));
    // 0x2ff980: 0x8ca90894  lw          $t1, 0x894($a1)
    ctx->pc = 0x2ff980u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2196)));
    // 0x2ff984: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2ff984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2ff988: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x2ff988u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x2ff98c: 0x246a1bf8  addiu       $t2, $v1, 0x1BF8
    ctx->pc = 0x2ff98cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 7160));
    // 0x2ff990: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ff990u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff994: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x2ff994u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2ff998: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x2ff998u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x2ff99c: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x2ff99cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2ff9a0: 0x7cc30020  sq          $v1, 0x20($a2)
    ctx->pc = 0x2ff9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 3));
    // 0x2ff9a4: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x2ff9a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2ff9a8: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x2ff9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x2ff9ac: 0x8d26001c  lw          $a2, 0x1C($t1)
    ctx->pc = 0x2ff9acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
label_2ff9b0:
    // 0x2ff9b0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2ff9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2ff9b4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2ff9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2ff9b8: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2ff9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2ff9bc: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2ff9bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ff9c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ff9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ff9c4: 0x28e50016  slti        $a1, $a3, 0x16
    ctx->pc = 0x2ff9c4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x2ff9c8: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2ff9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2ff9cc: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x2ff9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2ff9d0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2ff9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2ff9d4: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x2ff9d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2ff9d8: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x2ff9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x2ff9dc: 0x78c30020  lq          $v1, 0x20($a2)
    ctx->pc = 0x2ff9dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2ff9e0: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x2ff9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x2ff9e4: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x2ff9e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2ff9e8: 0x24c60090  addiu       $a2, $a2, 0x90
    ctx->pc = 0x2ff9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
    // 0x2ff9ec: 0x14a0fff0  bnez        $a1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2FF9ECu;
    {
        const bool branch_taken_0x2ff9ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF9ECu;
        // 0x2ff9f0: 0x7c820030  sq          $v0, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff9ec) {
            ctx->pc = 0x2FF9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ff9b0;
        }
    }
    ctx->pc = 0x2FF9F4u;
    // 0x2ff9f4: 0x8d23001c  lw          $v1, 0x1C($t1)
    ctx->pc = 0x2ff9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x2ff9f8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2ff9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2ff9fc: 0x24491bf8  addiu       $t1, $v0, 0x1BF8
    ctx->pc = 0x2ff9fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 7160));
    // 0x2ffa00: 0x24070033  addiu       $a3, $zero, 0x33
    ctx->pc = 0x2ffa00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x2ffa04: 0x24661cb0  addiu       $a2, $v1, 0x1CB0
    ctx->pc = 0x2ffa04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 7344));
label_2ffa08:
    // 0x2ffa08: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2ffa08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2ffa0c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2ffa0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2ffa10: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2ffa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2ffa14: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2ffa14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ffa18: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ffa18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ffa1c: 0x28e5006b  slti        $a1, $a3, 0x6B
    ctx->pc = 0x2ffa1cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)107) ? 1 : 0);
    // 0x2ffa20: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2ffa20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2ffa24: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x2ffa24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2ffa28: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2ffa28u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2ffa2c: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x2ffa2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2ffa30: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x2ffa30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x2ffa34: 0x78c30020  lq          $v1, 0x20($a2)
    ctx->pc = 0x2ffa34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2ffa38: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x2ffa38u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x2ffa3c: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x2ffa3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2ffa40: 0x24c60090  addiu       $a2, $a2, 0x90
    ctx->pc = 0x2ffa40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
    // 0x2ffa44: 0x14a0fff0  bnez        $a1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2FFA44u;
    {
        const bool branch_taken_0x2ffa44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA44u;
        // 0x2ffa48: 0x7c820030  sq          $v0, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffa44) {
            ctx->pc = 0x2FFA08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ffa08;
        }
    }
    ctx->pc = 0x2FFA4Cu;
    // 0x2ffa4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFA54u;
    // 0x2ffa54: 0x0  nop
    ctx->pc = 0x2ffa54u;
    // NOP
    ctx->pc = 0x2ffa58u;
}
