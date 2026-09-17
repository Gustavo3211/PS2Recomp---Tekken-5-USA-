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

// Function: sub_00499F80
// Address: 0x499f80 - 0x499ff8
void sub_00499F80_0x499f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499F80_0x499f80");
#endif

    ctx->pc = 0x499f80u;

    // 0x499f80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x499f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x499f84: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x499f84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x499f88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x499f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x499f8c: 0x24a50b60  addiu       $a1, $a1, 0xB60
    ctx->pc = 0x499f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2912));
    // 0x499f90: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x499f90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x499f94: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x499f94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x499f98: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x499f98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0B60u));
    // 0x499f9c: 0x24c60b48  addiu       $a2, $a2, 0xB48
    ctx->pc = 0x499f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2888));
    // 0x499fa0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x499fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0B48u));
    // 0x499fa4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x499fa4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x499fa8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x499fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x499fac: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x499facu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x499fb0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x499fb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F0B60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B60u, _value); } while (0);
    // 0x499fb4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x499fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x499fb8: 0x24680002  addiu       $t0, $v1, 0x2
    ctx->pc = 0x499fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x499fbc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x499fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x499fc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x499fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x499fc4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x499fc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x499fc8: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x499fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x499fcc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x499fccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x499fd0: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x499fd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x499fd4: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x499fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x499fd8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x499fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x499fdc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x499fdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x499fe0: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x499fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x499fe4: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x499fe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x499fe8: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x499fe8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x499fec: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x499fecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x499ff0: 0x8123bd2  j           func_48EF48
    ctx->pc = 0x499FF0u;
    ctx->pc = 0x499FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499FF0u;
    // 0x499ff4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF48u;
    sub_0048EF48_0x48ef48(rdram, ctx, runtime); return;
    ctx->pc = 0x499FF8u;
}
