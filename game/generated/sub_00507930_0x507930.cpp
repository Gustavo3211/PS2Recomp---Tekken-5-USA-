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

// Function: sub_00507930
// Address: 0x507930 - 0x5079d8
void sub_00507930_0x507930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00507930_0x507930");
#endif

    switch (ctx->pc) {
        case 0x507954u: goto label_507954;
        default: break;
    }

    ctx->pc = 0x507930u;

    // 0x507930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x507930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x507934: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x507934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x507938: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x507938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x50793c: 0x2450c580  addiu       $s0, $v0, -0x3A80
    ctx->pc = 0x50793cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952320));
    // 0x507940: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x507940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x507944: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x507944u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8EC580u));
    // 0x507948: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x507948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x50794c: 0xc14481c  jal         func_512070
    ctx->pc = 0x50794Cu;
    SET_GPR_U32(ctx, 31, 0x507954u);
    ctx->pc = 0x507950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50794Cu;
    // 0x507950: 0x2484c57c  addiu       $a0, $a0, -0x3A84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952316));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x50794Cu, 0x507954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x507954u;
label_507954:
    // 0x507954: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x507954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x507958: 0x5443001b  bnel        $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x507958u;
    {
        const bool branch_taken_0x507958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x507958) {
            ctx->pc = 0x50795Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x507958u;
            // 0x50795c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5079C8u;
            goto label_5079c8;
        }
    }
    ctx->pc = 0x507960u;
    // 0x507960: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x507960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x507964: 0x24020368  addiu       $v0, $zero, 0x368
    ctx->pc = 0x507964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 872));
    // 0x507968: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x507968u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50796c: 0x240200d6  addiu       $v0, $zero, 0xD6
    ctx->pc = 0x50796cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    // 0x507970: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x507970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x507974: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x507974u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x507978: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x507978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50797c: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x50797cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x507980: 0x240201b0  addiu       $v0, $zero, 0x1B0
    ctx->pc = 0x507980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
    // 0x507984: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x507984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x507988: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x507988u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x50798c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x50798cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x507990: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x507990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x507994: 0xa4820008  sh          $v0, 0x8($a0)
    ctx->pc = 0x507994u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x507998: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x507998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x50799c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x50799cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5079a0: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x5079a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x5079a4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x5079a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x5079a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x5079a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5079ac: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x5079acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x5079b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x5079b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5079b4: 0xa460000e  sh          $zero, 0xE($v1)
    ctx->pc = 0x5079b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x5079b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x5079b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5079bc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x5079bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x5079c0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x5079c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x5079c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5079c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_5079c8:
    // 0x5079c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x5079c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5079cc: 0x3e00008  jr          $ra
    ctx->pc = 0x5079CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5079D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5079CCu;
        // 0x5079d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5079CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5079D4u;
    // 0x5079d4: 0x0  nop
    ctx->pc = 0x5079d4u;
    // NOP
    ctx->pc = 0x5079d8u;
}
