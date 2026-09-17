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

// Function: sub_004A9668
// Address: 0x4a9668 - 0x4a96e0
void sub_004A9668_0x4a9668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9668_0x4a9668");
#endif

    switch (ctx->pc) {
        case 0x4a96c4u: goto label_4a96c4;
        default: break;
    }

    ctx->pc = 0x4a9668u;

    // 0x4a9668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a9668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a966c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4a966cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4a9670: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a9670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a9674: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4a9674u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4a9678: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4a9678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4a967c: 0x24840c5c  addiu       $a0, $a0, 0xC5C
    ctx->pc = 0x4a967cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3164));
    // 0x4a9680: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x4a9680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x4a9684: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4a9684u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4a9688: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a9688u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0C5Cu));
    // 0x4a968c: 0x24639110  addiu       $v1, $v1, -0x6EF0
    ctx->pc = 0x4a968cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938896));
    // 0x4a9690: 0x32c02  srl         $a1, $v1, 16
    ctx->pc = 0x4a9690u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4a9694: 0x26100c64  addiu       $s0, $s0, 0xC64
    ctx->pc = 0x4a9694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3172));
    // 0x4a9698: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x4a9698u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x4a969c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a969cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a96a0: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x4a96a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a96a4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a96a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a96a8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4a96a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a96ac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4a96acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4a96b0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x4a96b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x4a96b4: 0x94c30c84  lhu         $v1, 0xC84($a2)
    ctx->pc = 0x4a96b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 3204)));
    // 0x4a96b8: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x4a96b8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a96bc: 0xc12a6fc  jal         func_4A9BF0
    ctx->pc = 0x4A96BCu;
    SET_GPR_U32(ctx, 31, 0x4A96C4u);
    ctx->pc = 0x4A96C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A96BCu;
    // 0x4a96c0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9BF0u, 0x4A96BCu, 0x4A96C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A96C4u;
label_4a96c4:
    // 0x4a96c4: 0x24423000  addiu       $v0, $v0, 0x3000
    ctx->pc = 0x4a96c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12288));
    // 0x4a96c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4a96c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a96cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4a96ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4a96d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a96d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a96d4: 0x812a4fc  j           func_4A93F0
    ctx->pc = 0x4A96D4u;
    ctx->pc = 0x4A96D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A96D4u;
    // 0x4a96d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A93F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A93F0u, 0x4A96D4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4A96DCu;
    // 0x4a96dc: 0x0  nop
    ctx->pc = 0x4a96dcu;
    // NOP
    ctx->pc = 0x4a96e0u;
}
