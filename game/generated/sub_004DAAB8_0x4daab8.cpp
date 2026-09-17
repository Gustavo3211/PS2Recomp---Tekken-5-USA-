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

// Function: sub_004DAAB8
// Address: 0x4daab8 - 0x4dabe8
void sub_004DAAB8_0x4daab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DAAB8_0x4daab8");
#endif

    switch (ctx->pc) {
        case 0x4daaccu: goto label_4daacc;
        default: break;
    }

    ctx->pc = 0x4daab8u;

    // 0x4daab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4daab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4daabc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4daabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4daac0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4daac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4daac4: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4DAAC4u;
    SET_GPR_U32(ctx, 31, 0x4DAACCu);
    ctx->pc = 0x4DAAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DAAC4u;
    // 0x4daac8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4DAAC4u, 0x4DAACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DAACCu;
label_4daacc:
    // 0x4daacc: 0x24030082  addiu       $v1, $zero, 0x82
    ctx->pc = 0x4daaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x4daad0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x4daad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4daad4: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4daad4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
    // 0x4daad8: 0x24470010  addiu       $a3, $v0, 0x10
    ctx->pc = 0x4daad8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4daadc: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4daadcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4daae0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4daae0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4daae4: 0xa444016a  sh          $a0, 0x16A($v0)
    ctx->pc = 0x4daae4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 362), (uint16_t)GPR_U32(ctx, 4));
    // 0x4daae8: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4daae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4daaec: 0x24a510fc  addiu       $a1, $a1, 0x10FC
    ctx->pc = 0x4daaecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4348));
    // 0x4daaf0: 0x24480014  addiu       $t0, $v0, 0x14
    ctx->pc = 0x4daaf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x4daaf4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4daaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4daaf8: 0x24490018  addiu       $t1, $v0, 0x18
    ctx->pc = 0x4daaf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4daafc: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x4daafcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4dab00: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x4dab00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4dab04: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4dab04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4dab08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4dab08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4dab0c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4dab0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4dab10: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4dab10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x4dab14: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4dab14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4dab18: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4dab18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dab1c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4dab1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4dab20: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4dab20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4dab24: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dab24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dab28: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4dab28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4dab2c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4dab2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4dab30: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4dab30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4dab34: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dab34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dab38: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4dab38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dab3c: 0x24632000  addiu       $v1, $v1, 0x2000
    ctx->pc = 0x4dab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
    // 0x4dab40: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4dab40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4dab44: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4dab44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4dab48: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4dab48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4dab4c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dab4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dab50: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4dab50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dab54: 0x2463fd00  addiu       $v1, $v1, -0x300
    ctx->pc = 0x4dab54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966528));
    // 0x4dab58: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4dab58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4dab5c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4dab5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4dab60: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4dab60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4dab64: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4dab64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dab68: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4dab68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4dab6c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4dab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4dab70: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4dab70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x4dab74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dab74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dab78: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4dab78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4dab7c: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4dab7cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4dab80: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x4dab80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4dab84: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4dab84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dab88: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4dab88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4dab8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4dab8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dab90: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4dab90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4dab94: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dab94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dab98: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4dab98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4dab9c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4dab9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4daba0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4daba0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4daba4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4daba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4daba8: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4daba8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dabac: 0x24630200  addiu       $v1, $v1, 0x200
    ctx->pc = 0x4dabacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x4dabb0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4dabb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4dabb4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4dabb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4dabb8: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4dabb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4dabbc: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4dabbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dabc0: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x4dabc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4dabc4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4dabc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4dabc8: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4dabc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x4dabcc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dabccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dabd0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4dabd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4dabd4: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x4dabd4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x4dabd8: 0xa44a01be  sh          $t2, 0x1BE($v0)
    ctx->pc = 0x4dabd8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 446), (uint16_t)GPR_U32(ctx, 10));
    // 0x4dabdc: 0x3e00008  jr          $ra
    ctx->pc = 0x4DABDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DABDCu;
        // 0x4dabe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DABDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DABE4u;
    // 0x4dabe4: 0x0  nop
    ctx->pc = 0x4dabe4u;
    // NOP
    ctx->pc = 0x4dabe8u;
}
