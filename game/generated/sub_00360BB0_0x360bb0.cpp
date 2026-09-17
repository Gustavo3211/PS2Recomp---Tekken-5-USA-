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

// Function: sub_00360BB0
// Address: 0x360bb0 - 0x360c40
void sub_00360BB0_0x360bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360BB0_0x360bb0");
#endif

    ctx->pc = 0x360bb0u;

    // 0x360bb0: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x360bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x360bb4: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x360bb4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x360bb8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x360bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x360bbc: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x360bbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x360bc0: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x360bc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x360bc4: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x360bc4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x360bc8: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x360bc8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x360bcc: 0x11200019  beqz        $t1, . + 4 + (0x19 << 2)
    ctx->pc = 0x360BCCu;
    {
        const bool branch_taken_0x360bcc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x360BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360BCCu;
        // 0x360bd0: 0x3442001a  ori         $v0, $v0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x360bcc) {
            ctx->pc = 0x360C34u;
            goto label_360c34;
        }
    }
    ctx->pc = 0x360BD4u;
    // 0x360bd4: 0xa5260004  sh          $a2, 0x4($t1)
    ctx->pc = 0x360bd4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x360bd8: 0xa5250006  sh          $a1, 0x6($t1)
    ctx->pc = 0x360bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x360bdc: 0x9482000a  lhu         $v0, 0xA($a0)
    ctx->pc = 0x360bdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x360be0: 0xad22000c  sw          $v0, 0xC($t1)
    ctx->pc = 0x360be0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 2));
    // 0x360be4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x360be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x360be8: 0xad230018  sw          $v1, 0x18($t1)
    ctx->pc = 0x360be8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 3));
    // 0x360bec: 0x90820010  lbu         $v0, 0x10($a0)
    ctx->pc = 0x360becu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x360bf0: 0xe52c0010  swc1        $f12, 0x10($t1)
    ctx->pc = 0x360bf0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
    // 0x360bf4: 0xa522001e  sh          $v0, 0x1E($t1)
    ctx->pc = 0x360bf4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x360bf8: 0xa5270014  sh          $a3, 0x14($t1)
    ctx->pc = 0x360bf8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 20), (uint16_t)GPR_U32(ctx, 7));
    // 0x360bfc: 0xa528001c  sh          $t0, 0x1C($t1)
    ctx->pc = 0x360bfcu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 28), (uint16_t)GPR_U32(ctx, 8));
    // 0x360c00: 0x8f82c7f0  lw          $v0, -0x3810($gp)
    ctx->pc = 0x360c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952944)));
    // 0x360c04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x360c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x360c08: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x360C08u;
    {
        const bool branch_taken_0x360c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x360c08) {
            ctx->pc = 0x360C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x360C08u;
            // 0x360c0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x360C10u;
            goto label_360c10;
        }
    }
    ctx->pc = 0x360C10u;
label_360c10:
    // 0x360c10: 0xaf82c7f0  sw          $v0, -0x3810($gp)
    ctx->pc = 0x360c10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952944), GPR_U32(ctx, 2));
    // 0x360c14: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x360c14u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
    // 0x360c18: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x360c18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x360c1c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x360c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x360c20: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x360C20u;
    {
        const bool branch_taken_0x360c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x360c20) {
            ctx->pc = 0x360C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x360C20u;
            // 0x360c24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x360C34u;
            goto label_360c34;
        }
    }
    ctx->pc = 0x360C28u;
    // 0x360c28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x360c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360c2c: 0xad220020  sw          $v0, 0x20($t1)
    ctx->pc = 0x360c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 2));
    // 0x360c30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x360c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_360c34:
    // 0x360c34: 0x3e00008  jr          $ra
    ctx->pc = 0x360C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360C3Cu;
    // 0x360c3c: 0x0  nop
    ctx->pc = 0x360c3cu;
    // NOP
    ctx->pc = 0x360c40u;
}
