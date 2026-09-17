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

// Function: sub_00506520
// Address: 0x506520 - 0x506570
void sub_00506520_0x506520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00506520_0x506520");
#endif

    ctx->pc = 0x506520u;

    // 0x506520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x506520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x506524: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x506524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x506528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x506528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50652c: 0x24a5c52c  addiu       $a1, $a1, -0x3AD4
    ctx->pc = 0x50652cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952236));
    // 0x506530: 0x3c06008f  lui         $a2, 0x8F
    ctx->pc = 0x506530u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)143 << 16));
    // 0x506534: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x506534u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x506538: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x506538u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC52Cu));
    // 0x50653c: 0x24c6c538  addiu       $a2, $a2, -0x3AC8
    ctx->pc = 0x50653cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952248));
    // 0x506540: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x506540u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC538u));
    // 0x506544: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x506544u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x506548: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x506548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x50654c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50654cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x506550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x506550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x506554: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x506554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x506558: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x506558u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8EC52Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC52Cu, _value); } while (0);
    // 0x50655c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x50655cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x506560: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x506560u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x506564: 0x814187e  j           func_5061F8
    ctx->pc = 0x506564u;
    ctx->pc = 0x506568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x506564u;
    // 0x506568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5061F8u;
    sub_005061F8_0x5061f8(rdram, ctx, runtime); return;
    ctx->pc = 0x50656Cu;
    // 0x50656c: 0x0  nop
    ctx->pc = 0x50656cu;
    // NOP
    ctx->pc = 0x506570u;
}
