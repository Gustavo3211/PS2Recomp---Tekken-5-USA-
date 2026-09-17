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

// Function: sub_004AD8B0
// Address: 0x4ad8b0 - 0x4ad8e0
void sub_004AD8B0_0x4ad8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AD8B0_0x4ad8b0");
#endif

    ctx->pc = 0x4ad8b0u;

    // 0x4ad8b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ad8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ad8b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4ad8b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad8b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ad8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ad8bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4ad8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4ad8c0: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x4ad8c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ad8c4: 0x244201b4  addiu       $v0, $v0, 0x1B4
    ctx->pc = 0x4ad8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 436));
    // 0x4ad8c8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4ad8c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ad8cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ad8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad8d0: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x4ad8d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x4ad8d4: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4ad8d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ad8d8: 0x8123392  j           func_48CE48
    ctx->pc = 0x4AD8D8u;
    ctx->pc = 0x4AD8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD8D8u;
    // 0x4ad8dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CE48u;
    sub_0048CE48_0x48ce48(rdram, ctx, runtime); return;
    ctx->pc = 0x4AD8E0u;
}
