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

// Function: sub_00511960
// Address: 0x511960 - 0x5119c0
void sub_00511960_0x511960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00511960_0x511960");
#endif

    ctx->pc = 0x511960u;

    // 0x511960: 0x2488000e  addiu       $t0, $a0, 0xE
    ctx->pc = 0x511960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 14));
    // 0x511964: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x511964u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x511968: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x511968u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x51196c: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x51196cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x511970: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x511970u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x511974: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x511974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x511978: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x511978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x51197c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x51197cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x511980: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x511980u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x511984: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x511984u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x511988: 0x8485004c  lh          $a1, 0x4C($a0)
    ctx->pc = 0x511988u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x51198c: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x51198cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x511990: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x511990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x511994: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x511994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x511998: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x511998u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x51199c: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x51199cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x5119a0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x5119a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x5119a4: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x5119a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x5119a8: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x5119a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x5119ac: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x5119acu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x5119b0: 0xa5050000  sh          $a1, 0x0($t0)
    ctx->pc = 0x5119b0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x5119b4: 0x3e00008  jr          $ra
    ctx->pc = 0x5119B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5119B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5119B4u;
        // 0x5119b8: 0xa4c00000  sh          $zero, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5119B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5119BCu;
    // 0x5119bc: 0x0  nop
    ctx->pc = 0x5119bcu;
    // NOP
    ctx->pc = 0x5119c0u;
}
