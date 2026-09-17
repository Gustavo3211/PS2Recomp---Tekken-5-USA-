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

// Function: sub_002AFFB0
// Address: 0x2affb0 - 0x2b0028
void sub_002AFFB0_0x2affb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AFFB0_0x2affb0");
#endif

    switch (ctx->pc) {
        case 0x2afff4u: goto label_2afff4;
        default: break;
    }

    ctx->pc = 0x2affb0u;

    // 0x2affb0: 0x8c860064  lw          $a2, 0x64($a0)
    ctx->pc = 0x2affb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x2affb4: 0x4c00032  bltz        $a2, . + 4 + (0x32 << 2)
    ctx->pc = 0x2AFFB4u;
    {
        const bool branch_taken_0x2affb4 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x2affb4) {
            ctx->pc = 0x2B0080u;
            return;
        }
    }
    ctx->pc = 0x2AFFBCu;
    // 0x2affbc: 0x8c880038  lw          $t0, 0x38($a0)
    ctx->pc = 0x2affbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2affc0: 0xc8102a  slt         $v0, $a2, $t0
    ctx->pc = 0x2affc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2affc4: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2AFFC4u;
    {
        const bool branch_taken_0x2affc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2affc4) {
            ctx->pc = 0x2B0080u;
            return;
        }
    }
    ctx->pc = 0x2AFFCCu;
    // 0x2affcc: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x2affccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2affd0: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2affd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2affd4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2AFFD4u;
    {
        const bool branch_taken_0x2affd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFFD4u;
        // 0x2affd8: 0x61180  sll         $v0, $a2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2affd4) {
            ctx->pc = 0x2B0040u;
            return;
        }
    }
    ctx->pc = 0x2AFFDCu;
    // 0x2affdc: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x2affdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2affe0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2affe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2affe4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2affe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2affe8: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x2affe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x2affec: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2AFFECu;
    {
        const bool branch_taken_0x2affec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFFECu;
        // 0x2afff0: 0x24830064  addiu       $v1, $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2affec) {
            ctx->pc = 0x2B0028u;
            return;
        }
    }
    ctx->pc = 0x2AFFF4u;
label_2afff4:
    // 0x2afff4: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x2afff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2afff8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2afff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2afffc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2afffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0000: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2b0000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2b0004: 0x48282a  slt         $a1, $v0, $t0
    ctx->pc = 0x2b0004u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2b0008: 0x440001d  bltz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2B0008u;
    {
        const bool branch_taken_0x2b0008 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0008u;
        // 0x2b000c: 0xac820064  sw          $v0, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0008) {
            ctx->pc = 0x2B0080u;
            return;
        }
    }
    ctx->pc = 0x2B0010u;
    // 0x2b0010: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B0010u;
    {
        const bool branch_taken_0x2b0010 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0010) {
            ctx->pc = 0x2B0080u;
            return;
        }
    }
    ctx->pc = 0x2B0018u;
    // 0x2b0018: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b0018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b001c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2b001cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2b0020: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2B0020u;
    {
        const bool branch_taken_0x2b0020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0020u;
        // 0x2b0024: 0x24830064  addiu       $v1, $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0020) {
            ctx->pc = 0x2AFFF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2afff4;
        }
    }
    ctx->pc = 0x2B0028u;
}
