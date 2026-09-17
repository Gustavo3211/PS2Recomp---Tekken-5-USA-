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

// Function: sub_005044C0
// Address: 0x5044c0 - 0x5045b0
void sub_005044C0_0x5044c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005044C0_0x5044c0");
#endif

    switch (ctx->pc) {
        case 0x5044e8u: goto label_5044e8;
        case 0x504500u: goto label_504500;
        case 0x504514u: goto label_504514;
        case 0x504568u: goto label_504568;
        case 0x504580u: goto label_504580;
        default: break;
    }

    ctx->pc = 0x5044c0u;

    // 0x5044c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5044c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x5044c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5044c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x5044c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x5044c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x5044cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5044ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5044d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x5044d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x5044d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x5044d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5044d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x5044d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x5044dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5044dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x5044e0: 0xc144abc  jal         func_512AF0
    ctx->pc = 0x5044E0u;
    SET_GPR_U32(ctx, 31, 0x5044E8u);
    ctx->pc = 0x5044E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5044E0u;
    // 0x5044e4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AF0u, 0x5044E0u, 0x5044E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5044E8u;
label_5044e8:
    // 0x5044e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x5044e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5044ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x5044ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5044f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5044f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5044f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x5044f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5044f8: 0xc141070  jal         func_5041C0
    ctx->pc = 0x5044F8u;
    SET_GPR_U32(ctx, 31, 0x504500u);
    ctx->pc = 0x5044FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5044F8u;
    // 0x5044fc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5041C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5041C0u, 0x5044F8u, 0x504500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504500u;
label_504500:
    // 0x504500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504504: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x504504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504508: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x504508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50450c: 0xc140ff0  jal         func_503FC0
    ctx->pc = 0x50450Cu;
    SET_GPR_U32(ctx, 31, 0x504514u);
    ctx->pc = 0x504510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50450Cu;
    // 0x504510: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503FC0u, 0x50450Cu, 0x504514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504514u;
label_504514:
    // 0x504514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504518: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x504518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50451c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50451cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x504520: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x504520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504524: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x504524u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x504528: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x504528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50452c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x50452cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x504530: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x504530u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x504534: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x504534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x504538: 0x8141030  j           func_5040C0
    ctx->pc = 0x504538u;
    ctx->pc = 0x50453Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504538u;
    // 0x50453c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5040C0u;
    sub_005040C0_0x5040c0(rdram, ctx, runtime); return;
    ctx->pc = 0x504540u;
    // 0x504540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x504540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x504544: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x504544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x504548: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x504548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x50454c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x50454cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504550: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x504550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x504554: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x504554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504558: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x504558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x50455c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x50455cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x504560: 0xc144abc  jal         func_512AF0
    ctx->pc = 0x504560u;
    SET_GPR_U32(ctx, 31, 0x504568u);
    ctx->pc = 0x504564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504560u;
    // 0x504564: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AF0u, 0x504560u, 0x504568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504568u;
label_504568:
    // 0x504568: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x504568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50456c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x50456cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504574: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x504574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504578: 0xc141070  jal         func_5041C0
    ctx->pc = 0x504578u;
    SET_GPR_U32(ctx, 31, 0x504580u);
    ctx->pc = 0x50457Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504578u;
    // 0x50457c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5041C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5041C0u, 0x504578u, 0x504580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504580u;
label_504580:
    // 0x504580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504584: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x504584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504588: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x504588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50458c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x50458cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504590: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x504590u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x504594: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x504594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504598: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x504598u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50459c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50459cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5045a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5045a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5045a4: 0x8141030  j           func_5040C0
    ctx->pc = 0x5045A4u;
    ctx->pc = 0x5045A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5045A4u;
    // 0x5045a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5040C0u;
    sub_005040C0_0x5040c0(rdram, ctx, runtime); return;
    ctx->pc = 0x5045ACu;
    // 0x5045ac: 0x0  nop
    ctx->pc = 0x5045acu;
    // NOP
    ctx->pc = 0x5045b0u;
}
