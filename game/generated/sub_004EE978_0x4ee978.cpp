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

// Function: sub_004EE978
// Address: 0x4ee978 - 0x4eea28
void sub_004EE978_0x4ee978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EE978_0x4ee978");
#endif

    ctx->pc = 0x4ee978u;

    // 0x4ee978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ee978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ee97c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4ee97cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4ee980: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ee980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ee984: 0x24e711ec  addiu       $a3, $a3, 0x11EC
    ctx->pc = 0x4ee984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4588));
    // 0x4ee988: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4ee988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4ee98c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4ee98cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4ee990: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4ee990u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11ECu));
    // 0x4ee994: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x4ee994u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x4ee998: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x4ee998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x4ee99c: 0x248411f4  addiu       $a0, $a0, 0x11F4
    ctx->pc = 0x4ee99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4596));
    // 0x4ee9a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ee9a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ee9a4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4ee9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4ee9a8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4ee9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4ee9ac: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x4ee9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4ee9b0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4ee9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4ee9b4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4ee9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4ee9b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ee9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ee9bc: 0x84860000  lh          $a2, 0x0($a0)
    ctx->pc = 0x4ee9bcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ee9c0: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x4ee9c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ee9c4: 0x8123b78  j           func_48EDE0
    ctx->pc = 0x4EE9C4u;
    ctx->pc = 0x4EE9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EE9C4u;
    // 0x4ee9c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EDE0u;
    sub_0048EDE0_0x48ede0(rdram, ctx, runtime); return;
    ctx->pc = 0x4EE9CCu;
    // 0x4ee9cc: 0x0  nop
    ctx->pc = 0x4ee9ccu;
    // NOP
    // 0x4ee9d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ee9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ee9d4: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4ee9d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4ee9d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ee9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ee9dc: 0x24e711ec  addiu       $a3, $a3, 0x11EC
    ctx->pc = 0x4ee9dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4588));
    // 0x4ee9e0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4ee9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4ee9e4: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4ee9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4ee9e8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4ee9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11ECu));
    // 0x4ee9ec: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x4ee9ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x4ee9f0: 0x3c026020  lui         $v0, 0x6020
    ctx->pc = 0x4ee9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24608 << 16));
    // 0x4ee9f4: 0x248411f4  addiu       $a0, $a0, 0x11F4
    ctx->pc = 0x4ee9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4596));
    // 0x4ee9f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ee9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ee9fc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4ee9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4eea00: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4eea00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4eea04: 0x24056020  addiu       $a1, $zero, 0x6020
    ctx->pc = 0x4eea04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24608));
    // 0x4eea08: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4eea08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4eea0c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4eea0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4eea10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eea10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eea14: 0x84860000  lh          $a2, 0x0($a0)
    ctx->pc = 0x4eea14u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4eea18: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x4eea18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4eea1c: 0x8123b78  j           func_48EDE0
    ctx->pc = 0x4EEA1Cu;
    ctx->pc = 0x4EEA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EEA1Cu;
    // 0x4eea20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EDE0u;
    sub_0048EDE0_0x48ede0(rdram, ctx, runtime); return;
    ctx->pc = 0x4EEA24u;
    // 0x4eea24: 0x0  nop
    ctx->pc = 0x4eea24u;
    // NOP
    ctx->pc = 0x4eea28u;
}
