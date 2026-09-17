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

// Function: sub_004DB450
// Address: 0x4db450 - 0x4db4b0
void sub_004DB450_0x4db450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB450_0x4db450");
#endif

    switch (ctx->pc) {
        case 0x4db470u: goto label_4db470;
        default: break;
    }

    ctx->pc = 0x4db450u;

    // 0x4db450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4db450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4db454: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4db454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4db458: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x4db458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x4db45c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4db45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4db460: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4db460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4db464: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4db464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db468: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4DB468u;
    SET_GPR_U32(ctx, 31, 0x4DB470u);
    ctx->pc = 0x4DB46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB468u;
    // 0x4db46c: 0xa462fa44  sh          $v0, -0x5BC($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294965828), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4DB468u, 0x4DB470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB470u;
label_4db470:
    // 0x4db470: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4db470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4db474: 0x260601bc  addiu       $a2, $s0, 0x1BC
    ctx->pc = 0x4db474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4db478: 0x24a510fc  addiu       $a1, $a1, 0x10FC
    ctx->pc = 0x4db478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4348));
    // 0x4db47c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4db47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db480: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x4db480u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F10FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F10FCu, _value); } while (0);
    // 0x4db484: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4db484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4db488: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4db488u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F10FCu));
    // 0x4db48c: 0xa602015e  sh          $v0, 0x15E($s0)
    ctx->pc = 0x4db48cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4db490: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4db490u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7F10FCu));
    // 0x4db494: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x4db494u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x4db498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4db498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4db49c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4db49cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4db4a0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4db4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4db4a4: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4db4a4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4db4a8: 0x8136d2c  j           func_4DB4B0
    ctx->pc = 0x4DB4A8u;
    ctx->pc = 0x4DB4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB4A8u;
    // 0x4db4ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB4B0u;
    sub_004DB4B0_0x4db4b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4DB4B0u;
}
