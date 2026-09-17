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

// Function: sub_004A2AD0
// Address: 0x4a2ad0 - 0x4a2b88
void sub_004A2AD0_0x4a2ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A2AD0_0x4a2ad0");
#endif

    ctx->pc = 0x4a2ad0u;

    // 0x4a2ad0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a2ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a2ad4: 0x24a80024  addiu       $t0, $a1, 0x24
    ctx->pc = 0x4a2ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
    // 0x4a2ad8: 0x94a30012  lhu         $v1, 0x12($a1)
    ctx->pc = 0x4a2ad8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x4a2adc: 0x24a9002c  addiu       $t1, $a1, 0x2C
    ctx->pc = 0x4a2adcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
    // 0x4a2ae0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a2ae0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2ae4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2ae8: 0x94a30016  lhu         $v1, 0x16($a1)
    ctx->pc = 0x4a2ae8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
    // 0x4a2aec: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a2aecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2af0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2af4: 0x94a3001a  lhu         $v1, 0x1A($a1)
    ctx->pc = 0x4a2af4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x4a2af8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a2af8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2afc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2b00: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4a2b00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2b04: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2b08: 0x84a60022  lh          $a2, 0x22($a1)
    ctx->pc = 0x4a2b08u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x4a2b0c: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4a2b0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a2b10: 0x63023  negu        $a2, $a2
    ctx->pc = 0x4a2b10u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x4a2b14: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x4a2b14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4a2b18: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x4a2b18u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4a2b1c: 0xa4e60000  sh          $a2, 0x0($a3)
    ctx->pc = 0x4a2b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x4a2b20: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4a2b20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a2b24: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a2b24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2b28: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2b2c: 0x94a30026  lhu         $v1, 0x26($a1)
    ctx->pc = 0x4a2b2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
    // 0x4a2b30: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a2b30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2b34: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2b38: 0x94a30028  lhu         $v1, 0x28($a1)
    ctx->pc = 0x4a2b38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x4a2b3c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a2b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2b40: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2b44: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4a2b44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2b48: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2b4c: 0x84a6002a  lh          $a2, 0x2A($a1)
    ctx->pc = 0x4a2b4cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x4a2b50: 0x85230000  lh          $v1, 0x0($t1)
    ctx->pc = 0x4a2b50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a2b54: 0x63023  negu        $a2, $a2
    ctx->pc = 0x4a2b54u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x4a2b58: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x4a2b58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4a2b5c: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x4a2b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4a2b60: 0xa4e60000  sh          $a2, 0x0($a3)
    ctx->pc = 0x4a2b60u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x4a2b64: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x4a2b64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a2b68: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a2b68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2b6c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2b70: 0x94a3002e  lhu         $v1, 0x2E($a1)
    ctx->pc = 0x4a2b70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 46)));
    // 0x4a2b74: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a2b74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a2b78: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a2b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a2b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A2B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A2B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2B7Cu;
        // 0x4a2b80: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A2B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A2B84u;
    // 0x4a2b84: 0x0  nop
    ctx->pc = 0x4a2b84u;
    // NOP
    ctx->pc = 0x4a2b88u;
}
