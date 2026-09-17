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

// Function: sub_0031B950
// Address: 0x31b950 - 0x31b9a8
void sub_0031B950_0x31b950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B950_0x31b950");
#endif

    switch (ctx->pc) {
        case 0x31b96cu: goto label_31b96c;
        default: break;
    }

    ctx->pc = 0x31b950u;

    // 0x31b950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31b950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31b954: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31b954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31b958: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31b958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b95c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31b95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31b960: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31b960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31b964: 0xc0c6b92  jal         func_31AE48
    ctx->pc = 0x31B964u;
    SET_GPR_U32(ctx, 31, 0x31B96Cu);
    ctx->pc = 0x31B968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B964u;
    // 0x31b968: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AE48u, 0x31B964u, 0x31B96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B96Cu;
label_31b96c:
    // 0x31b96c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x31b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x31b970: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x31b970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x31b974: 0x244224a8  addiu       $v0, $v0, 0x24A8
    ctx->pc = 0x31b974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9384));
    // 0x31b978: 0x24a51778  addiu       $a1, $a1, 0x1778
    ctx->pc = 0x31b978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6008));
    // 0x31b97c: 0xae050050  sw          $a1, 0x50($s0)
    ctx->pc = 0x31b97cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 5));
    // 0x31b980: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31b980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b984: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x31b984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x31b988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b98c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31b98cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31b990: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x31b990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x31b994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31b994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b998: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31b998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b99c: 0x80c6ce2  j           func_31B388
    ctx->pc = 0x31B99Cu;
    ctx->pc = 0x31B9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B99Cu;
    // 0x31b9a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B388u;
    sub_0031B388_0x31b388(rdram, ctx, runtime); return;
    ctx->pc = 0x31B9A4u;
    // 0x31b9a4: 0x0  nop
    ctx->pc = 0x31b9a4u;
    // NOP
    ctx->pc = 0x31b9a8u;
}
