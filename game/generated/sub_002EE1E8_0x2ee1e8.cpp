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

// Function: sub_002EE1E8
// Address: 0x2ee1e8 - 0x2ee268
void sub_002EE1E8_0x2ee1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE1E8_0x2ee1e8");
#endif

    switch (ctx->pc) {
        case 0x2ee1f8u: goto label_2ee1f8;
        default: break;
    }

    ctx->pc = 0x2ee1e8u;

    // 0x2ee1e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ee1e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee1ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ee1ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee1f0: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x2ee1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2ee1f4: 0x0  nop
    ctx->pc = 0x2ee1f4u;
    // NOP
label_2ee1f8:
    // 0x2ee1f8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2ee1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2ee1fc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2ee1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ee200: 0x24460050  addiu       $a2, $v0, 0x50
    ctx->pc = 0x2ee200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2ee204: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2ee204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ee208: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EE208u;
    {
        const bool branch_taken_0x2ee208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE208u;
        // 0x2ee20c: 0x28e80008  slti        $t0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee208) {
            ctx->pc = 0x2EE224u;
            goto label_2ee224;
        }
    }
    ctx->pc = 0x2EE210u;
    // 0x2ee210: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2ee210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ee214: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ee214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee218: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2ee218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2ee21c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE21Cu;
    {
        const bool branch_taken_0x2ee21c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee21c) {
            ctx->pc = 0x2EE230u;
            goto label_2ee230;
        }
    }
    ctx->pc = 0x2EE224u;
label_2ee224:
    // 0x2ee224: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2ee224u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2ee228: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ee228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee22c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2ee22cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_2ee230:
    // 0x2ee230: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EE230u;
    {
        const bool branch_taken_0x2ee230 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE230u;
        // 0x2ee234: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee230) {
            ctx->pc = 0x2EE254u;
            goto label_2ee254;
        }
    }
    ctx->pc = 0x2EE238u;
    // 0x2ee238: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x2ee238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x2ee23c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE23Cu;
    {
        const bool branch_taken_0x2ee23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE23Cu;
        // 0x2ee240: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee23c) {
            ctx->pc = 0x2EE24Cu;
            goto label_2ee24c;
        }
    }
    ctx->pc = 0x2EE244u;
    // 0x2ee244: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ee244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ee248: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x2ee248u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ee24c:
    // 0x2ee24c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE24Cu;
    {
        const bool branch_taken_0x2ee24c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE24Cu;
        // 0x2ee250: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee24c) {
            ctx->pc = 0x2EE260u;
            goto label_2ee260;
        }
    }
    ctx->pc = 0x2EE254u;
label_2ee254:
    // 0x2ee254: 0x5500ffe8  bnel        $t0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2EE254u;
    {
        const bool branch_taken_0x2ee254 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee254) {
            ctx->pc = 0x2EE258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE254u;
            // 0x2ee258: 0x710c0  sll         $v0, $a3, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee1f8;
        }
    }
    ctx->pc = 0x2EE25Cu;
    // 0x2ee25c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x2ee25cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2ee260:
    // 0x2ee260: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE268u;
}
