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

// Function: sub_004EE350
// Address: 0x4ee350 - 0x4ee3a0
void sub_004EE350_0x4ee350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE350_0x4ee350");
#endif

    switch (ctx->pc) {
        case 0x4ee364u: goto label_4ee364;
        default: break;
    }

    ctx->pc = 0x4ee350u;

    // 0x4ee350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ee350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ee354: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ee354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ee358: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ee358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ee35c: 0xc13ba5e  jal         func_4EE978
    ctx->pc = 0x4EE35Cu;
    SET_GPR_U32(ctx, 31, 0x4EE364u);
    ctx->pc = 0x4EE360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE35Cu;
    // 0x4ee360: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EE978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EE978u, 0x4EE35Cu, 0x4EE364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EE364u;
label_4ee364:
    // 0x4ee364: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x4ee364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x4ee368: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4ee368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4ee36c: 0xa6020166  sh          $v0, 0x166($s0)
    ctx->pc = 0x4ee36cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 358), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ee370: 0x260501bc  addiu       $a1, $s0, 0x1BC
    ctx->pc = 0x4ee370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4ee374: 0xa603014a  sh          $v1, 0x14A($s0)
    ctx->pc = 0x4ee374u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 330), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ee378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ee378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ee37c: 0xa6000164  sh          $zero, 0x164($s0)
    ctx->pc = 0x4ee37cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 356), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ee380: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ee380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ee384: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ee384u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ee388: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ee388u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ee38c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ee38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ee390: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4ee390u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ee394: 0x813b8e8  j           func_4EE3A0
    ctx->pc = 0x4EE394u;
    ctx->pc = 0x4EE398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE394u;
    // 0x4ee398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EE3A0u;
    sub_004EE3A0_0x4ee3a0(rdram, ctx, runtime); return;
    ctx->pc = 0x4EE39Cu;
    // 0x4ee39c: 0x0  nop
    ctx->pc = 0x4ee39cu;
    // NOP
    ctx->pc = 0x4ee3a0u;
}
