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

// Function: sub_0048EBC8
// Address: 0x48ebc8 - 0x48ec30
void sub_0048EBC8_0x48ebc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048EBC8_0x48ebc8");
#endif

    ctx->pc = 0x48ebc8u;

    // 0x48ebc8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x48ebc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x48ebcc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x48ebccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x48ebd0: 0x52bc3  sra         $a1, $a1, 15
    ctx->pc = 0x48ebd0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 15));
    // 0x48ebd4: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x48ebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x48ebd8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x48ebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x48ebdc: 0x9042f652  lbu         $v0, -0x9AE($v0)
    ctx->pc = 0x48ebdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964818)));
    // 0x48ebe0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x48EBE0u;
    {
        const bool branch_taken_0x48ebe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EBE0u;
        // 0x48ebe4: 0x3c06007e  lui         $a2, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ebe0) {
            ctx->pc = 0x48EC64u;
            return;
        }
    }
    ctx->pc = 0x48EBE8u;
    // 0x48ebe8: 0x42443  sra         $a0, $a0, 17
    ctx->pc = 0x48ebe8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 17));
    // 0x48ebec: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x48ebecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x48ebf0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x48EBF0u;
    {
        const bool branch_taken_0x48ebf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EBF0u;
        // 0x48ebf4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ebf0) {
            ctx->pc = 0x48EC64u;
            return;
        }
    }
    ctx->pc = 0x48EBF8u;
    // 0x48ebf8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48ebfc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48ebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48ec00: 0x8c639f90  lw          $v1, -0x6070($v1)
    ctx->pc = 0x48ec00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942608)));
    // 0x48ec04: 0x600008  jr          $v1
    ctx->pc = 0x48EC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x48EC10u: goto label_48ec10;
            case 0x48EC20u: goto label_48ec20;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48EC04u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x48EC0Cu;
    // 0x48ec0c: 0x0  nop
    ctx->pc = 0x48ec0cu;
    // NOP
label_48ec10:
    // 0x48ec10: 0x24c2f650  addiu       $v0, $a2, -0x9B0
    ctx->pc = 0x48ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964816));
    // 0x48ec14: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x48EC14u;
    {
        const bool branch_taken_0x48ec14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EC14u;
        // 0x48ec18: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ec14) {
            ctx->pc = 0x48EC48u;
            return;
        }
    }
    ctx->pc = 0x48EC1Cu;
    // 0x48ec1c: 0x0  nop
    ctx->pc = 0x48ec1cu;
    // NOP
label_48ec20:
    // 0x48ec20: 0x24c2f650  addiu       $v0, $a2, -0x9B0
    ctx->pc = 0x48ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964816));
    // 0x48ec24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x48EC24u;
    {
        const bool branch_taken_0x48ec24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48EC24u;
        // 0x48ec28: 0x24030082  addiu       $v1, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ec24) {
            ctx->pc = 0x48EC48u;
            return;
        }
    }
    ctx->pc = 0x48EC2Cu;
    // 0x48ec2c: 0x0  nop
    ctx->pc = 0x48ec2cu;
    // NOP
    ctx->pc = 0x48ec30u;
}
