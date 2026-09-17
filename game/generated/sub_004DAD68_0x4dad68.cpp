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

// Function: sub_004DAD68
// Address: 0x4dad68 - 0x4daeb0
void sub_004DAD68_0x4dad68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DAD68_0x4dad68");
#endif

    switch (ctx->pc) {
        case 0x4dad7cu: goto label_4dad7c;
        default: break;
    }

    ctx->pc = 0x4dad68u;

    // 0x4dad68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dad68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4dad6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4dad6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4dad70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4dad70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4dad74: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4DAD74u;
    SET_GPR_U32(ctx, 31, 0x4DAD7Cu);
    ctx->pc = 0x4DAD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DAD74u;
    // 0x4dad78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4DAD74u, 0x4DAD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DAD7Cu;
label_4dad7c:
    // 0x4dad7c: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x4dad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x4dad80: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x4dad80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4dad84: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4dad84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
    // 0x4dad88: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4dad88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4dad8c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4dad8cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4dad90: 0x24a510fc  addiu       $a1, $a1, 0x10FC
    ctx->pc = 0x4dad90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4348));
    // 0x4dad94: 0xa444016a  sh          $a0, 0x16A($v0)
    ctx->pc = 0x4dad94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 362), (uint16_t)GPR_U32(ctx, 4));
    // 0x4dad98: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4dad98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4dad9c: 0x24470010  addiu       $a3, $v0, 0x10
    ctx->pc = 0x4dad9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4dada0: 0x24480014  addiu       $t0, $v0, 0x14
    ctx->pc = 0x4dada0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x4dada4: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x4dada4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x4dada8: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x4dada8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4dadac: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4dadacu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F10FCu));
    // 0x4dadb0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4dadb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4dadb4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4dadb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4dadb8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dadb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dadbc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4dadbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4dadc0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4dadc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4dadc4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dadc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dadc8: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4dadc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dadcc: 0x2463fe00  addiu       $v1, $v1, -0x200
    ctx->pc = 0x4dadccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966784));
    // 0x4dadd0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4dadd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4dadd4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4dadd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4dadd8: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4dadd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4daddc: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4daddcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dade0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4dade0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4dade4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4dade4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4dade8: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4dade8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x4dadec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dadecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dadf0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4dadf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4dadf4: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4dadf4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x4dadf8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4dadf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4dadfc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4dadfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dae00: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4dae00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4dae04: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4dae04u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4dae08: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dae08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dae0c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4dae0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4dae10: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4dae10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4dae14: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4dae14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4dae18: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dae18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dae1c: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4dae1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dae20: 0x24632000  addiu       $v1, $v1, 0x2000
    ctx->pc = 0x4dae20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
    // 0x4dae24: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4dae24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4dae28: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4dae28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4dae2c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4dae2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4dae30: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4dae30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dae34: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4dae34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4dae38: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4dae38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4dae3c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4dae3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x4dae40: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dae40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dae44: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4dae44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4dae48: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4dae48u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4dae4c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x4dae4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4dae50: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4dae50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dae54: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4dae54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4dae58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4dae58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dae5c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4dae5cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4dae60: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dae60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dae64: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4dae64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4dae68: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4dae68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4dae6c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4dae6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4dae70: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4dae70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4dae74: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4dae74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dae78: 0x24630900  addiu       $v1, $v1, 0x900
    ctx->pc = 0x4dae78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2304));
    // 0x4dae7c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4dae7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4dae80: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4dae80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4dae84: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4dae84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4dae88: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4dae88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dae8c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4dae8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4dae90: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4dae90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4dae94: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4dae94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x4dae98: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dae98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dae9c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4dae9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4daea0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4daea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4daea4: 0x3e00008  jr          $ra
    ctx->pc = 0x4DAEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DAEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DAEA4u;
        // 0x4daea8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DAEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DAEACu;
    // 0x4daeac: 0x0  nop
    ctx->pc = 0x4daeacu;
    // NOP
    ctx->pc = 0x4daeb0u;
}
