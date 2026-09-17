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

// Function: sub_0012FC38
// Address: 0x12fc38 - 0x12fca0
void sub_0012FC38_0x12fc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FC38_0x12fc38");
#endif

    switch (ctx->pc) {
        case 0x12fc5cu: goto label_12fc5c;
        default: break;
    }

    ctx->pc = 0x12fc38u;

    // 0x12fc38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12fc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12fc3c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x12fc3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12fc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12fc44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12fc44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12fc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12fc4c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x12fc4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc50: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x12fc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x12fc54: 0xc04bff6  jal         func_12FFD8
    ctx->pc = 0x12FC54u;
    SET_GPR_U32(ctx, 31, 0x12FC5Cu);
    ctx->pc = 0x12FC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FC54u;
    // 0x12fc58: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FFD8u, 0x12FC54u, 0x12FC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC5Cu;
label_12fc5c:
    // 0x12fc5c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x12fc5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12fc60: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x12fc60u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x12fc64: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12FC64u;
    {
        const bool branch_taken_0x12fc64 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x12FC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC64u;
        // 0x12fc68: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc64) {
            ctx->pc = 0x12FC80u;
            goto label_12fc80;
        }
    }
    ctx->pc = 0x12FC6Cu;
    // 0x12fc6c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x12fc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x12fc70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12fc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12fc74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12FC74u;
    {
        const bool branch_taken_0x12fc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC74u;
        // 0x12fc78: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc74) {
            ctx->pc = 0x12FC8Cu;
            goto label_12fc8c;
        }
    }
    ctx->pc = 0x12FC7Cu;
    // 0x12fc7c: 0x0  nop
    ctx->pc = 0x12fc7cu;
    // NOP
label_12fc80:
    // 0x12fc80: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x12fc80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12fc84: 0x3063efff  andi        $v1, $v1, 0xEFFF
    ctx->pc = 0x12fc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61439);
    // 0x12fc88: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x12fc88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
label_12fc8c:
    // 0x12fc8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12fc8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fc90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12fc90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12fc94: 0x3e00008  jr          $ra
    ctx->pc = 0x12FC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC94u;
        // 0x12fc98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FC9Cu;
    // 0x12fc9c: 0x0  nop
    ctx->pc = 0x12fc9cu;
    // NOP
    ctx->pc = 0x12fca0u;
}
