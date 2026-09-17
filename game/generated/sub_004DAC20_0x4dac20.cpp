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

// Function: sub_004DAC20
// Address: 0x4dac20 - 0x4dad68
void sub_004DAC20_0x4dac20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DAC20_0x4dac20");
#endif

    switch (ctx->pc) {
        case 0x4dac34u: goto label_4dac34;
        default: break;
    }

    ctx->pc = 0x4dac20u;

    // 0x4dac20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dac20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4dac24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4dac24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4dac28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4dac28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4dac2c: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4DAC2Cu;
    SET_GPR_U32(ctx, 31, 0x4DAC34u);
    ctx->pc = 0x4DAC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DAC2Cu;
    // 0x4dac30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4DAC2Cu, 0x4DAC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DAC34u;
label_4dac34:
    // 0x4dac34: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x4dac34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x4dac38: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x4dac38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4dac3c: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4dac3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
    // 0x4dac40: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4dac40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4dac44: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4dac44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4dac48: 0x24a510fc  addiu       $a1, $a1, 0x10FC
    ctx->pc = 0x4dac48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4348));
    // 0x4dac4c: 0xa444016a  sh          $a0, 0x16A($v0)
    ctx->pc = 0x4dac4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 362), (uint16_t)GPR_U32(ctx, 4));
    // 0x4dac50: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4dac50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4dac54: 0x24470010  addiu       $a3, $v0, 0x10
    ctx->pc = 0x4dac54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4dac58: 0x24480014  addiu       $t0, $v0, 0x14
    ctx->pc = 0x4dac58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x4dac5c: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x4dac5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x4dac60: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x4dac60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4dac64: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4dac64u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F10FCu));
    // 0x4dac68: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4dac68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4dac6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4dac6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4dac70: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dac70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dac74: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4dac74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4dac78: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4dac78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4dac7c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dac7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dac80: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4dac80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dac84: 0x24630200  addiu       $v1, $v1, 0x200
    ctx->pc = 0x4dac84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x4dac88: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4dac88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4dac8c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4dac8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4dac90: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4dac90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4dac94: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4dac94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dac98: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4dac98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4dac9c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4dac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4daca0: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4daca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x4daca4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4daca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4daca8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4daca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4dacac: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4dacacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x4dacb0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4dacb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4dacb4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4dacb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dacb8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4dacb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4dacbc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4dacbcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4dacc0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dacc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dacc4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4dacc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4dacc8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4dacc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4daccc: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4dacccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4dacd0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dacd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dacd4: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4dacd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dacd8: 0x24632000  addiu       $v1, $v1, 0x2000
    ctx->pc = 0x4dacd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
    // 0x4dacdc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4dacdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4dace0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4dace0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4dace4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4dace4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4dace8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4dace8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dacec: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4dacecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4dacf0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4dacf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4dacf4: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4dacf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x4dacf8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dacf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dacfc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4dacfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4dad00: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4dad00u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4dad04: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x4dad04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4dad08: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4dad08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dad0c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4dad0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4dad10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4dad10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dad14: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4dad14u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4dad18: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dad18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dad1c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4dad1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4dad20: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4dad20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4dad24: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4dad24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4dad28: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dad28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dad2c: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4dad2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dad30: 0x24630900  addiu       $v1, $v1, 0x900
    ctx->pc = 0x4dad30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2304));
    // 0x4dad34: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4dad34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4dad38: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4dad38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4dad3c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4dad3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4dad40: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4dad40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dad44: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4dad44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4dad48: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4dad48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4dad4c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4dad4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x4dad50: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dad50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dad54: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4dad54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4dad58: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4dad58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4dad5c: 0x3e00008  jr          $ra
    ctx->pc = 0x4DAD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DAD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAD5Cu;
        // 0x4dad60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DAD5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DAD64u;
    // 0x4dad64: 0x0  nop
    ctx->pc = 0x4dad64u;
    // NOP
    ctx->pc = 0x4dad68u;
}
