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

// Function: sub_002E51F0
// Address: 0x2e51f0 - 0x2e5270
void sub_002E51F0_0x2e51f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E51F0_0x2e51f0");
#endif

    switch (ctx->pc) {
        case 0x2e5220u: goto label_2e5220;
        case 0x2e5228u: goto label_2e5228;
        default: break;
    }

    ctx->pc = 0x2e51f0u;

    // 0x2e51f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e51f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e51f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e51f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e51f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e51f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e51fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e51fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e5200: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e5200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e5204: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2e5204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2e5208: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x2e5208u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e520c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2e520cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e5210: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E5210u;
    {
        const bool branch_taken_0x2e5210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5210u;
        // 0x2e5214: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5210) {
            ctx->pc = 0x2E5254u;
            goto label_2e5254;
        }
    }
    ctx->pc = 0x2E5218u;
    // 0x2e5218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e521c: 0x0  nop
    ctx->pc = 0x2e521cu;
    // NOP
label_2e5220:
    // 0x2e5220: 0xc04a43b  jal         func_1290EC
    ctx->pc = 0x2E5220u;
    SET_GPR_U32(ctx, 31, 0x2E5228u);
    ctx->pc = 0x2E5224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5220u;
    // 0x2e5224: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1290ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1290ECu, 0x2E5220u, 0x2E5228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5228u;
label_2e5228:
    // 0x2e5228: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5228u;
    {
        const bool branch_taken_0x2e5228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5228) {
            ctx->pc = 0x2E522Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5228u;
            // 0x2e522c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5240u;
            goto label_2e5240;
        }
    }
    ctx->pc = 0x2E5230u;
    // 0x2e5230: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2e5230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2e5234: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x2e5234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2e5238: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E5238u;
    {
        const bool branch_taken_0x2e5238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5238u;
        // 0x2e523c: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5238) {
            ctx->pc = 0x2E5258u;
            goto label_2e5258;
        }
    }
    ctx->pc = 0x2E5240u;
label_2e5240:
    // 0x2e5240: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2e5240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e5244: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x2e5244u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2e5248: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x2e5248u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e524c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E524Cu;
    {
        const bool branch_taken_0x2e524c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E524Cu;
        // 0x2e5250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e524c) {
            ctx->pc = 0x2E5220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5220;
        }
    }
    ctx->pc = 0x2E5254u;
label_2e5254:
    // 0x2e5254: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e5254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e5258:
    // 0x2e5258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e5258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e525c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e525cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e5260: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e5260u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5264: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e5264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e5268: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5268u;
        // 0x2e526c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5270u;
}
