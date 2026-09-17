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

// Function: sub_0026D178
// Address: 0x26d178 - 0x26d248
void sub_0026D178_0x26d178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D178_0x26d178");
#endif

    switch (ctx->pc) {
        case 0x26d1b0u: goto label_26d1b0;
        case 0x26d208u: goto label_26d208;
        default: break;
    }

    ctx->pc = 0x26d178u;

    // 0x26d178: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26d178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26d17c: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x26d17cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x26d180: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x26d180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26d184: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26d184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26d188: 0x54430019  bnel        $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x26D188u;
    {
        const bool branch_taken_0x26d188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26d188) {
            ctx->pc = 0x26D18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D188u;
            // 0x26d18c: 0x8ca200a4  lw          $v0, 0xA4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D1F0u;
            goto label_26d1f0;
        }
    }
    ctx->pc = 0x26D190u;
    // 0x26d190: 0x8ca300a4  lw          $v1, 0xA4($a1)
    ctx->pc = 0x26d190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
    // 0x26d194: 0x18600028  blez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x26D194u;
    {
        const bool branch_taken_0x26d194 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x26D198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D194u;
        // 0x26d198: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d194) {
            ctx->pc = 0x26D238u;
            goto label_26d238;
        }
    }
    ctx->pc = 0x26D19Cu;
    // 0x26d19c: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x26d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x26d1a0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x26d1a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d1a4: 0x2447f718  addiu       $a3, $v0, -0x8E8
    ctx->pc = 0x26d1a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965016));
    // 0x26d1a8: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x26d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x26d1ac: 0x0  nop
    ctx->pc = 0x26d1acu;
    // NOP
label_26d1b0:
    // 0x26d1b0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x26d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x26d1b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26d1b8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x26d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x26d1bc: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x26d1bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26d1c0: 0x58600005  blezl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26D1C0u;
    {
        const bool branch_taken_0x26d1c0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x26d1c0) {
            ctx->pc = 0x26D1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D1C0u;
            // 0x26d1c4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D1D8u;
            goto label_26d1d8;
        }
    }
    ctx->pc = 0x26D1C8u;
    // 0x26d1c8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x26d1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x26d1cc: 0x480001b  bltz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x26D1CCu;
    {
        const bool branch_taken_0x26d1cc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x26D1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D1CCu;
        // 0x26d1d0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d1cc) {
            ctx->pc = 0x26D23Cu;
            goto label_26d23c;
        }
    }
    ctx->pc = 0x26D1D4u;
    // 0x26d1d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x26d1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_26d1d8:
    // 0x26d1d8: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x26d1d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x26d1dc: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x26D1DCu;
    {
        const bool branch_taken_0x26d1dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d1dc) {
            ctx->pc = 0x26D1E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D1DCu;
            // 0x26d1e0: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26d1b0;
        }
    }
    ctx->pc = 0x26D1E4u;
    // 0x26d1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x26D1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D1E4u;
        // 0x26d1e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26D1ECu;
    // 0x26d1ec: 0x0  nop
    ctx->pc = 0x26d1ecu;
    // NOP
label_26d1f0:
    // 0x26d1f0: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x26d1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26d1f4: 0x4a00011  bltz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x26D1F4u;
    {
        const bool branch_taken_0x26d1f4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x26D1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D1F4u;
        // 0x26d1f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d1f4) {
            ctx->pc = 0x26D23Cu;
            goto label_26d23c;
        }
    }
    ctx->pc = 0x26D1FCu;
    // 0x26d1fc: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x26d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x26d200: 0x2446f718  addiu       $a2, $v0, -0x8E8
    ctx->pc = 0x26d200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965016));
    // 0x26d204: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x26d204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_26d208:
    // 0x26d208: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x26d208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x26d20c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26d20cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26d210: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x26d210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x26d214: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x26d214u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26d218: 0x58600005  blezl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26D218u;
    {
        const bool branch_taken_0x26d218 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x26d218) {
            ctx->pc = 0x26D21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D218u;
            // 0x26d21c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D230u;
            goto label_26d230;
        }
    }
    ctx->pc = 0x26D220u;
    // 0x26d220: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x26d220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x26d224: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26D224u;
    {
        const bool branch_taken_0x26d224 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x26D228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D224u;
        // 0x26d228: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d224) {
            ctx->pc = 0x26D23Cu;
            goto label_26d23c;
        }
    }
    ctx->pc = 0x26D22Cu;
    // 0x26d22c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x26d22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_26d230:
    // 0x26d230: 0x4a3fff5  bgezl       $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x26D230u;
    {
        const bool branch_taken_0x26d230 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x26d230) {
            ctx->pc = 0x26D234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D230u;
            // 0x26d234: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26d208;
        }
    }
    ctx->pc = 0x26D238u;
label_26d238:
    // 0x26d238: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26d238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26d23c:
    // 0x26d23c: 0x3e00008  jr          $ra
    ctx->pc = 0x26D23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D23Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26D244u;
    // 0x26d244: 0x0  nop
    ctx->pc = 0x26d244u;
    // NOP
    ctx->pc = 0x26d248u;
}
