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

// Function: sub_004AD670
// Address: 0x4ad670 - 0x4ad6c0
void sub_004AD670_0x4ad670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AD670_0x4ad670");
#endif

    switch (ctx->pc) {
        case 0x4ad694u: goto label_4ad694;
        case 0x4ad69cu: goto label_4ad69c;
        default: break;
    }

    ctx->pc = 0x4ad670u;

    // 0x4ad670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ad670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ad674: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4ad674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4ad678: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ad678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ad67c: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x4ad67cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x4ad680: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x4ad680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x4ad684: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ad684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ad688: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x4ad688u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72D68Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D68Au, _value); } while (0);
    // 0x4ad68c: 0xc12413e  jal         func_4904F8
    ctx->pc = 0x4AD68Cu;
    SET_GPR_U32(ctx, 31, 0x4AD694u);
    ctx->pc = 0x4AD690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD68Cu;
    // 0x4ad690: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904F8u, 0x4AD68Cu, 0x4AD694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD694u;
label_4ad694:
    // 0x4ad694: 0xc12413e  jal         func_4904F8
    ctx->pc = 0x4AD694u;
    SET_GPR_U32(ctx, 31, 0x4AD69Cu);
    ctx->pc = 0x4AD698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD694u;
    // 0x4ad698: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904F8u, 0x4AD694u, 0x4AD69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD69Cu;
label_4ad69c:
    // 0x4ad69c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ad69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ad6a0: 0xa6020018  sh          $v0, 0x18($s0)
    ctx->pc = 0x4ad6a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ad6a4: 0xa600007a  sh          $zero, 0x7A($s0)
    ctx->pc = 0x4ad6a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 122), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ad6a8: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x4ad6a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ad6ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ad6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ad6b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ad6b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad6b4: 0x8123240  j           func_48C900
    ctx->pc = 0x4AD6B4u;
    ctx->pc = 0x4AD6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD6B4u;
    // 0x4ad6b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C900u;
    sub_0048C900_0x48c900(rdram, ctx, runtime); return;
    ctx->pc = 0x4AD6BCu;
    // 0x4ad6bc: 0x0  nop
    ctx->pc = 0x4ad6bcu;
    // NOP
    ctx->pc = 0x4ad6c0u;
}
