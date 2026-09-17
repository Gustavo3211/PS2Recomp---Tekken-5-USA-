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

// Function: sub_004E9960
// Address: 0x4e9960 - 0x4e99e0
void sub_004E9960_0x4e9960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9960_0x4e9960");
#endif

    switch (ctx->pc) {
        case 0x4e9974u: goto label_4e9974;
        default: break;
    }

    ctx->pc = 0x4e9960u;

    // 0x4e9960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e9960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e9964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e9964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e9968: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4e9968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4e996c: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4E996Cu;
    SET_GPR_U32(ctx, 31, 0x4E9974u);
    ctx->pc = 0x4E9970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E996Cu;
    // 0x4e9970: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4E996Cu, 0x4E9974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E9974u;
label_4e9974:
    // 0x4e9974: 0x240300a4  addiu       $v1, $zero, 0xA4
    ctx->pc = 0x4e9974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x4e9978: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4e9978u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
    // 0x4e997c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4e997cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e9980: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x4e9980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4e9984: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4e9984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4e9988: 0x24470014  addiu       $a3, $v0, 0x14
    ctx->pc = 0x4e9988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x4e998c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x4e998cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4e9990: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x4e9990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4e9994: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4e9994u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e9998: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4e9998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4e999c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4e999cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e99a0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4e99a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4e99a4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4e99a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4e99a8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x4e99a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4e99ac: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4e99acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e99b0: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4e99b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4e99b4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4e99b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4e99b8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4e99b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4e99bc: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x4e99bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4e99c0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4e99c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e99c4: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4e99c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4e99c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e99c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e99cc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4e99ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4e99d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4e99d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4e99d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4E99D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E99D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E99D4u;
        // 0x4e99d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E99D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E99DCu;
    // 0x4e99dc: 0x0  nop
    ctx->pc = 0x4e99dcu;
    // NOP
    ctx->pc = 0x4e99e0u;
}
