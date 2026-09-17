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

// Function: sub_0049B1D0
// Address: 0x49b1d0 - 0x49b260
void sub_0049B1D0_0x49b1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049B1D0_0x49b1d0");
#endif

    switch (ctx->pc) {
        case 0x49b1f4u: goto label_49b1f4;
        case 0x49b204u: goto label_49b204;
        case 0x49b230u: goto label_49b230;
        case 0x49b238u: goto label_49b238;
        case 0x49b240u: goto label_49b240;
        case 0x49b248u: goto label_49b248;
        default: break;
    }

    ctx->pc = 0x49b1d0u;

    // 0x49b1d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49b1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x49b1d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49b1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49b1d8: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x49b1d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x49b1dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x49b1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x49b1e0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x49b1e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49b1e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x49b1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x49b1e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x49b1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x49b1ec: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x49B1ECu;
    SET_GPR_U32(ctx, 31, 0x49B1F4u);
    ctx->pc = 0x49B1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B1ECu;
    // 0x49b1f0: 0x2610d680  addiu       $s0, $s0, -0x2980 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x49B1ECu, 0x49B1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B1F4u;
label_49b1f4:
    // 0x49b1f4: 0xa612000a  sh          $s2, 0xA($s0)
    ctx->pc = 0x49b1f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 18));
    // 0x49b1f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x49b1f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b1fc: 0xc124098  jal         func_490260
    ctx->pc = 0x49B1FCu;
    SET_GPR_U32(ctx, 31, 0x49B204u);
    ctx->pc = 0x49B200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B1FCu;
    // 0x49b200: 0xa6002268  sh          $zero, 0x2268($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8808), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x490260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490260u, 0x49B1FCu, 0x49B204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B204u;
label_49b204:
    // 0x49b204: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x49b204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x49b208: 0x24427f38  addiu       $v0, $v0, 0x7F38
    ctx->pc = 0x49b208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32568));
    // 0x49b20c: 0xa6200048  sh          $zero, 0x48($s1)
    ctx->pc = 0x49b20cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 72), (uint16_t)GPR_U32(ctx, 0));
    // 0x49b210: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x49b210u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49b214: 0xa622004c  sh          $v0, 0x4C($s1)
    ctx->pc = 0x49b214u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 76), (uint16_t)GPR_U32(ctx, 2));
    // 0x49b218: 0xa623004a  sh          $v1, 0x4A($s1)
    ctx->pc = 0x49b218u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 74), (uint16_t)GPR_U32(ctx, 3));
    // 0x49b21c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x49b21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b220: 0xa612220a  sh          $s2, 0x220A($s0)
    ctx->pc = 0x49b220u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8714), (uint16_t)GPR_U32(ctx, 18));
    // 0x49b224: 0xa600220e  sh          $zero, 0x220E($s0)
    ctx->pc = 0x49b224u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8718), (uint16_t)GPR_U32(ctx, 0));
    // 0x49b228: 0xc12413e  jal         func_4904F8
    ctx->pc = 0x49B228u;
    SET_GPR_U32(ctx, 31, 0x49B230u);
    ctx->pc = 0x49B22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B228u;
    // 0x49b22c: 0xa600220c  sh          $zero, 0x220C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8716), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904F8u, 0x49B228u, 0x49B230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B230u;
label_49b230:
    // 0x49b230: 0xc12413e  jal         func_4904F8
    ctx->pc = 0x49B230u;
    SET_GPR_U32(ctx, 31, 0x49B238u);
    ctx->pc = 0x49B234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B230u;
    // 0x49b234: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904F8u, 0x49B230u, 0x49B238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B238u;
label_49b238:
    // 0x49b238: 0xc123c54  jal         func_48F150
    ctx->pc = 0x49B238u;
    SET_GPR_U32(ctx, 31, 0x49B240u);
    ctx->pc = 0x48F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F150u, 0x49B238u, 0x49B240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B240u;
label_49b240:
    // 0x49b240: 0xc123b48  jal         func_48ED20
    ctx->pc = 0x49B240u;
    SET_GPR_U32(ctx, 31, 0x49B248u);
    ctx->pc = 0x48ED20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48ED20u, 0x49B240u, 0x49B248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B248u;
label_49b248:
    // 0x49b248: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49b248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49b24c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x49b24cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49b250: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x49b250u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49b254: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x49b254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49b258: 0x8123228  j           func_48C8A0
    ctx->pc = 0x49B258u;
    ctx->pc = 0x49B25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B258u;
    // 0x49b25c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C8A0u;
    sub_0048C8A0_0x48c8a0(rdram, ctx, runtime); return;
    ctx->pc = 0x49B260u;
}
