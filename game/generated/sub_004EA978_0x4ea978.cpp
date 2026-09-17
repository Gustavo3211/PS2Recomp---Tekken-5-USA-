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

// Function: sub_004EA978
// Address: 0x4ea978 - 0x4ea9d8
void sub_004EA978_0x4ea978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EA978_0x4ea978");
#endif

    switch (ctx->pc) {
        case 0x4ea98cu: goto label_4ea98c;
        default: break;
    }

    ctx->pc = 0x4ea978u;

    // 0x4ea978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ea978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ea97c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ea97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ea980: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ea980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ea984: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4EA984u;
    SET_GPR_U32(ctx, 31, 0x4EA98Cu);
    ctx->pc = 0x4EA988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA984u;
    // 0x4ea988: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4EA984u, 0x4EA98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EA98Cu;
label_4ea98c:
    // 0x4ea98c: 0x2403009c  addiu       $v1, $zero, 0x9C
    ctx->pc = 0x4ea98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x4ea990: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4ea990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4ea994: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4ea994u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ea998: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4ea998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4ea99c: 0x260701bc  addiu       $a3, $s0, 0x1BC
    ctx->pc = 0x4ea99cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4ea9a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ea9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea9a4: 0x960301be  lhu         $v1, 0x1BE($s0)
    ctx->pc = 0x4ea9a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x4ea9a8: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4ea9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
    // 0x4ea9ac: 0xa44301be  sh          $v1, 0x1BE($v0)
    ctx->pc = 0x4ea9acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 446), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ea9b0: 0xa6050166  sh          $a1, 0x166($s0)
    ctx->pc = 0x4ea9b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 358), (uint16_t)GPR_U32(ctx, 5));
    // 0x4ea9b4: 0xa6060168  sh          $a2, 0x168($s0)
    ctx->pc = 0x4ea9b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 360), (uint16_t)GPR_U32(ctx, 6));
    // 0x4ea9b8: 0xa6060164  sh          $a2, 0x164($s0)
    ctx->pc = 0x4ea9b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 356), (uint16_t)GPR_U32(ctx, 6));
    // 0x4ea9bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ea9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ea9c0: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4ea9c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ea9c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ea9c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ea9c8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ea9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ea9cc: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x4ea9ccu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ea9d0: 0x813aa76  j           func_4EA9D8
    ctx->pc = 0x4EA9D0u;
    ctx->pc = 0x4EA9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA9D0u;
    // 0x4ea9d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA9D8u;
    sub_004EA9D8_0x4ea9d8(rdram, ctx, runtime); return;
    ctx->pc = 0x4EA9D8u;
}
