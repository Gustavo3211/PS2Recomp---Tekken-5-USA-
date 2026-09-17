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

// Function: sub_004DA990
// Address: 0x4da990 - 0x4daab8
void sub_004DA990_0x4da990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DA990_0x4da990");
#endif

    switch (ctx->pc) {
        case 0x4da9a4u: goto label_4da9a4;
        default: break;
    }

    ctx->pc = 0x4da990u;

    // 0x4da990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4da990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4da994: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4da994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4da998: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4da998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4da99c: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4DA99Cu;
    SET_GPR_U32(ctx, 31, 0x4DA9A4u);
    ctx->pc = 0x4DA9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DA99Cu;
    // 0x4da9a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4DA99Cu, 0x4DA9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DA9A4u;
label_4da9a4:
    // 0x4da9a4: 0x24030082  addiu       $v1, $zero, 0x82
    ctx->pc = 0x4da9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x4da9a8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x4da9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4da9ac: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4da9acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
    // 0x4da9b0: 0x24470010  addiu       $a3, $v0, 0x10
    ctx->pc = 0x4da9b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4da9b4: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4da9b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4da9b8: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4da9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4da9bc: 0xa444016a  sh          $a0, 0x16A($v0)
    ctx->pc = 0x4da9bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 362), (uint16_t)GPR_U32(ctx, 4));
    // 0x4da9c0: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4da9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4da9c4: 0x24a510fc  addiu       $a1, $a1, 0x10FC
    ctx->pc = 0x4da9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4348));
    // 0x4da9c8: 0x24480014  addiu       $t0, $v0, 0x14
    ctx->pc = 0x4da9c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x4da9cc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4da9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4da9d0: 0x24490018  addiu       $t1, $v0, 0x18
    ctx->pc = 0x4da9d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4da9d4: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x4da9d4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4da9d8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4da9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4da9dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4da9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4da9e0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4da9e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4da9e4: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4da9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x4da9e8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4da9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4da9ec: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4da9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4da9f0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4da9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4da9f4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4da9f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4da9f8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4da9f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4da9fc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4da9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4daa00: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4daa00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4daa04: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4daa04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4daa08: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4daa08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4daa0c: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4daa0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4daa10: 0x24632000  addiu       $v1, $v1, 0x2000
    ctx->pc = 0x4daa10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
    // 0x4daa14: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4daa14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4daa18: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4daa18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4daa1c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4daa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4daa20: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4daa20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4daa24: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4daa24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4daa28: 0x24630300  addiu       $v1, $v1, 0x300
    ctx->pc = 0x4daa28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 768));
    // 0x4daa2c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4daa2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4daa30: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4daa30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4daa34: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4daa34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4daa38: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4daa38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4daa3c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4daa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4daa40: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4daa40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4daa44: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4daa44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x4daa48: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4daa48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4daa4c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4daa4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4daa50: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4daa50u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4daa54: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x4daa54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4daa58: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4daa58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4daa5c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4daa5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4daa60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4daa60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4daa64: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4daa64u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4daa68: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4daa68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4daa6c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4daa6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4daa70: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4daa70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4daa74: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4daa74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4daa78: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4daa78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4daa7c: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4daa7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4daa80: 0x24630200  addiu       $v1, $v1, 0x200
    ctx->pc = 0x4daa80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x4daa84: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4daa84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4daa88: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4daa88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4daa8c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4daa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4daa90: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4daa90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4daa94: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x4daa94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4daa98: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4daa98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4daa9c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4daa9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x4daaa0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4daaa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4daaa4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4daaa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4daaa8: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x4daaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x4daaac: 0xa44001be  sh          $zero, 0x1BE($v0)
    ctx->pc = 0x4daaacu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 446), (uint16_t)GPR_U32(ctx, 0));
    // 0x4daab0: 0x3e00008  jr          $ra
    ctx->pc = 0x4DAAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DAAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAAB0u;
        // 0x4daab4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DAAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DAAB8u;
}
