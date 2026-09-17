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

// Function: sub_004A2B88
// Address: 0x4a2b88 - 0x4a2c40
void sub_004A2B88_0x4a2b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A2B88_0x4a2b88");
#endif

    ctx->pc = 0x4a2b88u;

    // 0x4a2b88: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a2b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a2b8c: 0x24a80024  addiu       $t0, $a1, 0x24
    ctx->pc = 0x4a2b8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
    // 0x4a2b90: 0x94a30012  lhu         $v1, 0x12($a1)
    ctx->pc = 0x4a2b90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x4a2b94: 0x24a9002c  addiu       $t1, $a1, 0x2C
    ctx->pc = 0x4a2b94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
    // 0x4a2b98: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a2b98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2b9c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2ba0: 0x94a30016  lhu         $v1, 0x16($a1)
    ctx->pc = 0x4a2ba0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
    // 0x4a2ba4: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a2ba4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2ba8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2bac: 0x94a3001a  lhu         $v1, 0x1A($a1)
    ctx->pc = 0x4a2bacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x4a2bb0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a2bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2bb4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2bb8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4a2bb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2bbc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2bc0: 0x84a60022  lh          $a2, 0x22($a1)
    ctx->pc = 0x4a2bc0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x4a2bc4: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4a2bc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a2bc8: 0x63023  negu        $a2, $a2
    ctx->pc = 0x4a2bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x4a2bcc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x4a2bccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4a2bd0: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x4a2bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4a2bd4: 0xa4e60000  sh          $a2, 0x0($a3)
    ctx->pc = 0x4a2bd4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x4a2bd8: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4a2bd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a2bdc: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a2bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2be0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2be4: 0x94a30026  lhu         $v1, 0x26($a1)
    ctx->pc = 0x4a2be4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
    // 0x4a2be8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a2be8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2bec: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2bf0: 0x94a30028  lhu         $v1, 0x28($a1)
    ctx->pc = 0x4a2bf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x4a2bf4: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a2bf4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2bf8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2bfc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4a2bfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2c00: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2c04: 0x84a6002a  lh          $a2, 0x2A($a1)
    ctx->pc = 0x4a2c04u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x4a2c08: 0x85230000  lh          $v1, 0x0($t1)
    ctx->pc = 0x4a2c08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a2c0c: 0x63023  negu        $a2, $a2
    ctx->pc = 0x4a2c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x4a2c10: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x4a2c10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4a2c14: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x4a2c14u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4a2c18: 0xa4e60000  sh          $a2, 0x0($a3)
    ctx->pc = 0x4a2c18u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x4a2c1c: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x4a2c1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a2c20: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a2c20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2c24: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2c28: 0x94a3002e  lhu         $v1, 0x2E($a1)
    ctx->pc = 0x4a2c28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 46)));
    // 0x4a2c2c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a2c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2c30: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2c34: 0x3e00008  jr          $ra
    ctx->pc = 0x4A2C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A2C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2C34u;
        // 0x4a2c38: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A2C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A2C3Cu;
    // 0x4a2c3c: 0x0  nop
    ctx->pc = 0x4a2c3cu;
    // NOP
    ctx->pc = 0x4a2c40u;
}
