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

// Function: sub_002AE510
// Address: 0x2ae510 - 0x2aeb20
void sub_002AE510_0x2ae510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AE510_0x2ae510");
#endif

    switch (ctx->pc) {
        case 0x2ae54cu: goto label_2ae54c;
        case 0x2ae55cu: goto label_2ae55c;
        case 0x2ae568u: goto label_2ae568;
        case 0x2ae578u: goto label_2ae578;
        case 0x2ae584u: goto label_2ae584;
        case 0x2ae594u: goto label_2ae594;
        case 0x2ae5a0u: goto label_2ae5a0;
        case 0x2ae5b0u: goto label_2ae5b0;
        case 0x2ae5bcu: goto label_2ae5bc;
        case 0x2ae5ccu: goto label_2ae5cc;
        case 0x2ae5d8u: goto label_2ae5d8;
        case 0x2ae5e8u: goto label_2ae5e8;
        case 0x2ae5f4u: goto label_2ae5f4;
        case 0x2ae604u: goto label_2ae604;
        case 0x2ae610u: goto label_2ae610;
        case 0x2ae620u: goto label_2ae620;
        case 0x2ae62cu: goto label_2ae62c;
        case 0x2ae63cu: goto label_2ae63c;
        case 0x2ae680u: goto label_2ae680;
        case 0x2ae6b8u: goto label_2ae6b8;
        case 0x2ae71cu: goto label_2ae71c;
        case 0x2ae780u: goto label_2ae780;
        case 0x2ae7e0u: goto label_2ae7e0;
        case 0x2ae840u: goto label_2ae840;
        case 0x2ae8a0u: goto label_2ae8a0;
        case 0x2ae900u: goto label_2ae900;
        case 0x2ae960u: goto label_2ae960;
        case 0x2ae9d0u: goto label_2ae9d0;
        case 0x2aea4cu: goto label_2aea4c;
        case 0x2aea5cu: goto label_2aea5c;
        case 0x2aea68u: goto label_2aea68;
        case 0x2aea78u: goto label_2aea78;
        case 0x2aea84u: goto label_2aea84;
        case 0x2aea94u: goto label_2aea94;
        case 0x2aeaa0u: goto label_2aeaa0;
        case 0x2aeab0u: goto label_2aeab0;
        case 0x2aeabcu: goto label_2aeabc;
        case 0x2aeaccu: goto label_2aeacc;
        case 0x2aead8u: goto label_2aead8;
        case 0x2aeae8u: goto label_2aeae8;
        default: break;
    }

    ctx->pc = 0x2ae510u;

    // 0x2ae510: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2ae510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2ae514: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ae514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae518: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ae518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ae51c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ae51cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae520: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ae520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ae524: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2ae524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2ae528: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2ae528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2ae52c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2ae52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2ae530: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2ae530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2ae534: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2ae534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2ae538: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2ae538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2ae53c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2ae53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2ae540: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2ae540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2ae544: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AE544u;
    SET_GPR_U32(ctx, 31, 0x2AE54Cu);
    ctx->pc = 0x2AE548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE544u;
    // 0x2ae548: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AE544u, 0x2AE54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE54Cu;
label_2ae54c:
    // 0x2ae54c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ae54cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2ae550: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ae550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae554: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2AE554u;
    SET_GPR_U32(ctx, 31, 0x2AE55Cu);
    ctx->pc = 0x2AE558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE554u;
    // 0x2ae558: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2AE554u, 0x2AE55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE55Cu;
label_2ae55c:
    // 0x2ae55c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ae55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae560: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AE560u;
    SET_GPR_U32(ctx, 31, 0x2AE568u);
    ctx->pc = 0x2AE564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE560u;
    // 0x2ae564: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AE560u, 0x2AE568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE568u;
label_2ae568:
    // 0x2ae568: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ae568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae56c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ae56cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2ae570: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2AE570u;
    SET_GPR_U32(ctx, 31, 0x2AE578u);
    ctx->pc = 0x2AE574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE570u;
    // 0x2ae574: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2AE570u, 0x2AE578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE578u;
label_2ae578:
    // 0x2ae578: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ae578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae57c: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AE57Cu;
    SET_GPR_U32(ctx, 31, 0x2AE584u);
    ctx->pc = 0x2AE580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE57Cu;
    // 0x2ae580: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AE57Cu, 0x2AE584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE584u;
label_2ae584:
    // 0x2ae584: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ae584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae588: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ae588u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2ae58c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2AE58Cu;
    SET_GPR_U32(ctx, 31, 0x2AE594u);
    ctx->pc = 0x2AE590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE58Cu;
    // 0x2ae590: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2AE58Cu, 0x2AE594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE594u;
label_2ae594:
    // 0x2ae594: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ae594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae598: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AE598u;
    SET_GPR_U32(ctx, 31, 0x2AE5A0u);
    ctx->pc = 0x2AE59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE598u;
    // 0x2ae59c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AE598u, 0x2AE5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE5A0u;
label_2ae5a0:
    // 0x2ae5a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ae5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae5a4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ae5a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2ae5a8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2AE5A8u;
    SET_GPR_U32(ctx, 31, 0x2AE5B0u);
    ctx->pc = 0x2AE5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE5A8u;
    // 0x2ae5ac: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2AE5A8u, 0x2AE5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE5B0u;
label_2ae5b0:
    // 0x2ae5b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ae5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae5b4: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AE5B4u;
    SET_GPR_U32(ctx, 31, 0x2AE5BCu);
    ctx->pc = 0x2AE5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE5B4u;
    // 0x2ae5b8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AE5B4u, 0x2AE5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE5BCu;
label_2ae5bc:
    // 0x2ae5bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ae5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae5c0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ae5c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2ae5c4: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2AE5C4u;
    SET_GPR_U32(ctx, 31, 0x2AE5CCu);
    ctx->pc = 0x2AE5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE5C4u;
    // 0x2ae5c8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2AE5C4u, 0x2AE5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE5CCu;
label_2ae5cc:
    // 0x2ae5cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ae5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae5d0: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AE5D0u;
    SET_GPR_U32(ctx, 31, 0x2AE5D8u);
    ctx->pc = 0x2AE5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE5D0u;
    // 0x2ae5d4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AE5D0u, 0x2AE5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE5D8u;
label_2ae5d8:
    // 0x2ae5d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ae5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae5dc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ae5dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2ae5e0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2AE5E0u;
    SET_GPR_U32(ctx, 31, 0x2AE5E8u);
    ctx->pc = 0x2AE5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE5E0u;
    // 0x2ae5e4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2AE5E0u, 0x2AE5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE5E8u;
label_2ae5e8:
    // 0x2ae5e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ae5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae5ec: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AE5ECu;
    SET_GPR_U32(ctx, 31, 0x2AE5F4u);
    ctx->pc = 0x2AE5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE5ECu;
    // 0x2ae5f0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AE5ECu, 0x2AE5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE5F4u;
label_2ae5f4:
    // 0x2ae5f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ae5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae5f8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ae5f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2ae5fc: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2AE5FCu;
    SET_GPR_U32(ctx, 31, 0x2AE604u);
    ctx->pc = 0x2AE600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE5FCu;
    // 0x2ae600: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2AE5FCu, 0x2AE604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE604u;
label_2ae604:
    // 0x2ae604: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ae604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae608: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AE608u;
    SET_GPR_U32(ctx, 31, 0x2AE610u);
    ctx->pc = 0x2AE60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE608u;
    // 0x2ae60c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AE608u, 0x2AE610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE610u;
label_2ae610:
    // 0x2ae610: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ae610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae614: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ae614u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2ae618: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2AE618u;
    SET_GPR_U32(ctx, 31, 0x2AE620u);
    ctx->pc = 0x2AE61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE618u;
    // 0x2ae61c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2AE618u, 0x2AE620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE620u;
label_2ae620:
    // 0x2ae620: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ae620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae624: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AE624u;
    SET_GPR_U32(ctx, 31, 0x2AE62Cu);
    ctx->pc = 0x2AE628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE624u;
    // 0x2ae628: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AE624u, 0x2AE62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE62Cu;
label_2ae62c:
    // 0x2ae62c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ae62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae630: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2ae630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ae634: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2AE634u;
    SET_GPR_U32(ctx, 31, 0x2AE63Cu);
    ctx->pc = 0x2AE638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE634u;
    // 0x2ae638: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2AE634u, 0x2AE63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE63Cu;
label_2ae63c:
    // 0x2ae63c: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x2ae63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2ae640: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ae640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ae644: 0x504000fc  beql        $v0, $zero, . + 4 + (0xFC << 2)
    ctx->pc = 0x2AE644u;
    {
        const bool branch_taken_0x2ae644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae644) {
            ctx->pc = 0x2AE648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE644u;
            // 0x2ae648: 0xde420080  ld          $v0, 0x80($s2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEA38u;
            goto label_2aea38;
        }
    }
    ctx->pc = 0x2AE64Cu;
    // 0x2ae64c: 0x8e4200b4  lw          $v0, 0xB4($s2)
    ctx->pc = 0x2ae64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x2ae650: 0x18400125  blez        $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x2AE650u;
    {
        const bool branch_taken_0x2ae650 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2AE654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE650u;
        // 0x2ae654: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae650) {
            ctx->pc = 0x2AEAE8u;
            goto label_2aeae8;
        }
    }
    ctx->pc = 0x2AE658u;
    // 0x2ae658: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x2ae658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2ae65c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2ae65cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2ae660: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ae660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ae664: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2ae664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ae668: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2ae668u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae66c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2ae66cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2ae670: 0x24160007  addiu       $s6, $zero, 0x7
    ctx->pc = 0x2ae670u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ae674: 0x24150008  addiu       $s5, $zero, 0x8
    ctx->pc = 0x2ae674u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ae678: 0x2494cec8  addiu       $s4, $a0, -0x3138
    ctx->pc = 0x2ae678u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954696));
    // 0x2ae67c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2ae67cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
label_2ae680:
    // 0x2ae680: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x2ae680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x2ae684: 0x8c83cec8  lw          $v1, -0x3138($a0)
    ctx->pc = 0x2ae684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954696)));
    // 0x2ae688: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2ae688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae68c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ae68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ae690: 0x8c5000b0  lw          $s0, 0xB0($v0)
    ctx->pc = 0x2ae690u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x2ae694: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2ae694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ae698: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2ae698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ae69c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AE69Cu;
    {
        const bool branch_taken_0x2ae69c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae69c) {
            ctx->pc = 0x2AE6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE69Cu;
            // 0x2ae6a0: 0xc6000018  lwc1        $f0, 0x18($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE6BCu;
            goto label_2ae6bc;
        }
    }
    ctx->pc = 0x2AE6A4u;
    // 0x2ae6a4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ae6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ae6a8: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2ae6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ae6ac: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ae6acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ae6b0: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AE6B0u;
    SET_GPR_U32(ctx, 31, 0x2AE6B8u);
    ctx->pc = 0x2AE6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE6B0u;
    // 0x2ae6b4: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AE6B0u, 0x2AE6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE6B8u;
label_2ae6b8:
    // 0x2ae6b8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2ae6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2ae6bc:
    // 0x2ae6bc: 0x53d60001  beql        $fp, $s6, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AE6BCu;
    {
        const bool branch_taken_0x2ae6bc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 22));
        if (branch_taken_0x2ae6bc) {
            ctx->pc = 0x2AE6C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE6BCu;
            // 0x2ae6c0: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE6C4u;
            goto label_2ae6c4;
        }
    }
    ctx->pc = 0x2AE6C4u;
label_2ae6c4:
    // 0x2ae6c4: 0x53d50001  beql        $fp, $s5, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AE6C4u;
    {
        const bool branch_taken_0x2ae6c4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 21));
        if (branch_taken_0x2ae6c4) {
            ctx->pc = 0x2AE6C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE6C4u;
            // 0x2ae6c8: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE6CCu;
            goto label_2ae6cc;
        }
    }
    ctx->pc = 0x2AE6CCu;
label_2ae6cc:
    // 0x2ae6cc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2ae6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ae6d0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2ae6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ae6d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AE6D4u;
    {
        const bool branch_taken_0x2ae6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE6D4u;
        // 0x2ae6d8: 0x26110008  addiu       $s1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae6d4) {
            ctx->pc = 0x2AE6F0u;
            goto label_2ae6f0;
        }
    }
    ctx->pc = 0x2AE6DCu;
    // 0x2ae6dc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2ae6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2ae6e0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2ae6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ae6e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE6E4u;
    {
        const bool branch_taken_0x2ae6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE6E4u;
        // 0x2ae6e8: 0xe4540008  swc1        $f20, 0x8($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae6e4) {
            ctx->pc = 0x2AE6F4u;
            goto label_2ae6f4;
        }
    }
    ctx->pc = 0x2AE6ECu;
    // 0x2ae6ec: 0x0  nop
    ctx->pc = 0x2ae6ecu;
    // NOP
label_2ae6f0:
    // 0x2ae6f0: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x2ae6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_2ae6f4:
    // 0x2ae6f4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2ae6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ae6f8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2ae6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2ae6fc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2ae6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ae700: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AE700u;
    {
        const bool branch_taken_0x2ae700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE700u;
        // 0x2ae704: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae700) {
            ctx->pc = 0x2AE728u;
            goto label_2ae728;
        }
    }
    ctx->pc = 0x2AE708u;
    // 0x2ae708: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ae708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ae70c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2ae70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ae710: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ae710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ae714: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AE714u;
    SET_GPR_U32(ctx, 31, 0x2AE71Cu);
    ctx->pc = 0x2AE718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE714u;
    // 0x2ae718: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AE714u, 0x2AE71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE71Cu;
label_2ae71c:
    // 0x2ae71c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE71Cu;
    {
        const bool branch_taken_0x2ae71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE71Cu;
        // 0x2ae720: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae71c) {
            ctx->pc = 0x2AE72Cu;
            goto label_2ae72c;
        }
    }
    ctx->pc = 0x2AE724u;
    // 0x2ae724: 0x0  nop
    ctx->pc = 0x2ae724u;
    // NOP
label_2ae728:
    // 0x2ae728: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x2ae728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ae72c:
    // 0x2ae72c: 0x52760001  beql        $s3, $s6, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AE72Cu;
    {
        const bool branch_taken_0x2ae72c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 22));
        if (branch_taken_0x2ae72c) {
            ctx->pc = 0x2AE730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE72Cu;
            // 0x2ae730: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE734u;
            goto label_2ae734;
        }
    }
    ctx->pc = 0x2AE734u;
label_2ae734:
    // 0x2ae734: 0x52750001  beql        $s3, $s5, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AE734u;
    {
        const bool branch_taken_0x2ae734 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 21));
        if (branch_taken_0x2ae734) {
            ctx->pc = 0x2AE738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE734u;
            // 0x2ae738: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE73Cu;
            goto label_2ae73c;
        }
    }
    ctx->pc = 0x2AE73Cu;
label_2ae73c:
    // 0x2ae73c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2ae73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2ae740: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2ae740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ae744: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AE744u;
    {
        const bool branch_taken_0x2ae744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae744) {
            ctx->pc = 0x2AE748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE744u;
            // 0x2ae748: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE758u;
            goto label_2ae758;
        }
    }
    ctx->pc = 0x2AE74Cu;
    // 0x2ae74c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2ae74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2ae750: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2ae750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ae754: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2ae754u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2ae758:
    // 0x2ae758: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2ae758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ae75c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2ae75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2ae760: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2ae760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ae764: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AE764u;
    {
        const bool branch_taken_0x2ae764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE764u;
        // 0x2ae768: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae764) {
            ctx->pc = 0x2AE788u;
            goto label_2ae788;
        }
    }
    ctx->pc = 0x2AE76Cu;
    // 0x2ae76c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ae76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ae770: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2ae770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ae774: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ae774u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ae778: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AE778u;
    SET_GPR_U32(ctx, 31, 0x2AE780u);
    ctx->pc = 0x2AE77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE778u;
    // 0x2ae77c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AE778u, 0x2AE780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE780u;
label_2ae780:
    // 0x2ae780: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AE780u;
    {
        const bool branch_taken_0x2ae780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE780u;
        // 0x2ae784: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae780) {
            ctx->pc = 0x2AE78Cu;
            goto label_2ae78c;
        }
    }
    ctx->pc = 0x2AE788u;
label_2ae788:
    // 0x2ae788: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x2ae788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ae78c:
    // 0x2ae78c: 0x52760001  beql        $s3, $s6, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AE78Cu;
    {
        const bool branch_taken_0x2ae78c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 22));
        if (branch_taken_0x2ae78c) {
            ctx->pc = 0x2AE790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE78Cu;
            // 0x2ae790: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE794u;
            goto label_2ae794;
        }
    }
    ctx->pc = 0x2AE794u;
label_2ae794:
    // 0x2ae794: 0x52750001  beql        $s3, $s5, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AE794u;
    {
        const bool branch_taken_0x2ae794 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 21));
        if (branch_taken_0x2ae794) {
            ctx->pc = 0x2AE798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE794u;
            // 0x2ae798: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE79Cu;
            goto label_2ae79c;
        }
    }
    ctx->pc = 0x2AE79Cu;
label_2ae79c:
    // 0x2ae79c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2ae79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2ae7a0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2ae7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ae7a4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AE7A4u;
    {
        const bool branch_taken_0x2ae7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae7a4) {
            ctx->pc = 0x2AE7A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE7A4u;
            // 0x2ae7a8: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE7B8u;
            goto label_2ae7b8;
        }
    }
    ctx->pc = 0x2AE7ACu;
    // 0x2ae7ac: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2ae7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2ae7b0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2ae7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ae7b4: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2ae7b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2ae7b8:
    // 0x2ae7b8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2ae7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ae7bc: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2ae7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2ae7c0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2ae7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ae7c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AE7C4u;
    {
        const bool branch_taken_0x2ae7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE7C4u;
        // 0x2ae7c8: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae7c4) {
            ctx->pc = 0x2AE7E8u;
            goto label_2ae7e8;
        }
    }
    ctx->pc = 0x2AE7CCu;
    // 0x2ae7cc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ae7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ae7d0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2ae7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ae7d4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ae7d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ae7d8: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AE7D8u;
    SET_GPR_U32(ctx, 31, 0x2AE7E0u);
    ctx->pc = 0x2AE7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE7D8u;
    // 0x2ae7dc: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AE7D8u, 0x2AE7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE7E0u;
label_2ae7e0:
    // 0x2ae7e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AE7E0u;
    {
        const bool branch_taken_0x2ae7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE7E0u;
        // 0x2ae7e4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae7e0) {
            ctx->pc = 0x2AE7ECu;
            goto label_2ae7ec;
        }
    }
    ctx->pc = 0x2AE7E8u;
label_2ae7e8:
    // 0x2ae7e8: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x2ae7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ae7ec:
    // 0x2ae7ec: 0x52760001  beql        $s3, $s6, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AE7ECu;
    {
        const bool branch_taken_0x2ae7ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 22));
        if (branch_taken_0x2ae7ec) {
            ctx->pc = 0x2AE7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE7ECu;
            // 0x2ae7f0: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE7F4u;
            goto label_2ae7f4;
        }
    }
    ctx->pc = 0x2AE7F4u;
label_2ae7f4:
    // 0x2ae7f4: 0x52750001  beql        $s3, $s5, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AE7F4u;
    {
        const bool branch_taken_0x2ae7f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 21));
        if (branch_taken_0x2ae7f4) {
            ctx->pc = 0x2AE7F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE7F4u;
            // 0x2ae7f8: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE7FCu;
            goto label_2ae7fc;
        }
    }
    ctx->pc = 0x2AE7FCu;
label_2ae7fc:
    // 0x2ae7fc: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2ae7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2ae800: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2ae800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ae804: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AE804u;
    {
        const bool branch_taken_0x2ae804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae804) {
            ctx->pc = 0x2AE808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE804u;
            // 0x2ae808: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE818u;
            goto label_2ae818;
        }
    }
    ctx->pc = 0x2AE80Cu;
    // 0x2ae80c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2ae80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2ae810: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2ae810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ae814: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2ae814u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2ae818:
    // 0x2ae818: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2ae818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ae81c: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2ae81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2ae820: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2ae820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ae824: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AE824u;
    {
        const bool branch_taken_0x2ae824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE824u;
        // 0x2ae828: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae824) {
            ctx->pc = 0x2AE848u;
            goto label_2ae848;
        }
    }
    ctx->pc = 0x2AE82Cu;
    // 0x2ae82c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ae82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ae830: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2ae830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ae834: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ae834u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ae838: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AE838u;
    SET_GPR_U32(ctx, 31, 0x2AE840u);
    ctx->pc = 0x2AE83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE838u;
    // 0x2ae83c: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AE838u, 0x2AE840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE840u;
label_2ae840:
    // 0x2ae840: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AE840u;
    {
        const bool branch_taken_0x2ae840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE840u;
        // 0x2ae844: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae840) {
            ctx->pc = 0x2AE84Cu;
            goto label_2ae84c;
        }
    }
    ctx->pc = 0x2AE848u;
label_2ae848:
    // 0x2ae848: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x2ae848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ae84c:
    // 0x2ae84c: 0x52760001  beql        $s3, $s6, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AE84Cu;
    {
        const bool branch_taken_0x2ae84c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 22));
        if (branch_taken_0x2ae84c) {
            ctx->pc = 0x2AE850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE84Cu;
            // 0x2ae850: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE854u;
            goto label_2ae854;
        }
    }
    ctx->pc = 0x2AE854u;
label_2ae854:
    // 0x2ae854: 0x52750001  beql        $s3, $s5, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AE854u;
    {
        const bool branch_taken_0x2ae854 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 21));
        if (branch_taken_0x2ae854) {
            ctx->pc = 0x2AE858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE854u;
            // 0x2ae858: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE85Cu;
            goto label_2ae85c;
        }
    }
    ctx->pc = 0x2AE85Cu;
label_2ae85c:
    // 0x2ae85c: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2ae85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2ae860: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2ae860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ae864: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AE864u;
    {
        const bool branch_taken_0x2ae864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae864) {
            ctx->pc = 0x2AE868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE864u;
            // 0x2ae868: 0xe6200020  swc1        $f0, 0x20($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE878u;
            goto label_2ae878;
        }
    }
    ctx->pc = 0x2AE86Cu;
    // 0x2ae86c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2ae86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2ae870: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2ae870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ae874: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2ae874u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2ae878:
    // 0x2ae878: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2ae878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ae87c: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x2ae87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x2ae880: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2ae880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ae884: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AE884u;
    {
        const bool branch_taken_0x2ae884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE884u;
        // 0x2ae888: 0x24130005  addiu       $s3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae884) {
            ctx->pc = 0x2AE8A8u;
            goto label_2ae8a8;
        }
    }
    ctx->pc = 0x2AE88Cu;
    // 0x2ae88c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ae88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ae890: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2ae890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ae894: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ae894u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ae898: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AE898u;
    SET_GPR_U32(ctx, 31, 0x2AE8A0u);
    ctx->pc = 0x2AE89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE898u;
    // 0x2ae89c: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AE898u, 0x2AE8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE8A0u;
label_2ae8a0:
    // 0x2ae8a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AE8A0u;
    {
        const bool branch_taken_0x2ae8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE8A0u;
        // 0x2ae8a4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae8a0) {
            ctx->pc = 0x2AE8ACu;
            goto label_2ae8ac;
        }
    }
    ctx->pc = 0x2AE8A8u;
label_2ae8a8:
    // 0x2ae8a8: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x2ae8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ae8ac:
    // 0x2ae8ac: 0x52760001  beql        $s3, $s6, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AE8ACu;
    {
        const bool branch_taken_0x2ae8ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 22));
        if (branch_taken_0x2ae8ac) {
            ctx->pc = 0x2AE8B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE8ACu;
            // 0x2ae8b0: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE8B4u;
            goto label_2ae8b4;
        }
    }
    ctx->pc = 0x2AE8B4u;
label_2ae8b4:
    // 0x2ae8b4: 0x52750001  beql        $s3, $s5, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AE8B4u;
    {
        const bool branch_taken_0x2ae8b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 21));
        if (branch_taken_0x2ae8b4) {
            ctx->pc = 0x2AE8B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE8B4u;
            // 0x2ae8b8: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE8BCu;
            goto label_2ae8bc;
        }
    }
    ctx->pc = 0x2AE8BCu;
label_2ae8bc:
    // 0x2ae8bc: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x2ae8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x2ae8c0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2ae8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ae8c4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AE8C4u;
    {
        const bool branch_taken_0x2ae8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae8c4) {
            ctx->pc = 0x2AE8C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE8C4u;
            // 0x2ae8c8: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE8D8u;
            goto label_2ae8d8;
        }
    }
    ctx->pc = 0x2AE8CCu;
    // 0x2ae8cc: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2ae8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2ae8d0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2ae8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ae8d4: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2ae8d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2ae8d8:
    // 0x2ae8d8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2ae8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ae8dc: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x2ae8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2ae8e0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2ae8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ae8e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AE8E4u;
    {
        const bool branch_taken_0x2ae8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE8E4u;
        // 0x2ae8e8: 0x24130006  addiu       $s3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae8e4) {
            ctx->pc = 0x2AE908u;
            goto label_2ae908;
        }
    }
    ctx->pc = 0x2AE8ECu;
    // 0x2ae8ec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ae8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ae8f0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2ae8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ae8f4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ae8f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ae8f8: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AE8F8u;
    SET_GPR_U32(ctx, 31, 0x2AE900u);
    ctx->pc = 0x2AE8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE8F8u;
    // 0x2ae8fc: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AE8F8u, 0x2AE900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE900u;
label_2ae900:
    // 0x2ae900: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AE900u;
    {
        const bool branch_taken_0x2ae900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE900u;
        // 0x2ae904: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae900) {
            ctx->pc = 0x2AE90Cu;
            goto label_2ae90c;
        }
    }
    ctx->pc = 0x2AE908u;
label_2ae908:
    // 0x2ae908: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x2ae908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ae90c:
    // 0x2ae90c: 0x52760001  beql        $s3, $s6, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AE90Cu;
    {
        const bool branch_taken_0x2ae90c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 22));
        if (branch_taken_0x2ae90c) {
            ctx->pc = 0x2AE910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE90Cu;
            // 0x2ae910: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE914u;
            goto label_2ae914;
        }
    }
    ctx->pc = 0x2AE914u;
label_2ae914:
    // 0x2ae914: 0x52750001  beql        $s3, $s5, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AE914u;
    {
        const bool branch_taken_0x2ae914 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 21));
        if (branch_taken_0x2ae914) {
            ctx->pc = 0x2AE918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE914u;
            // 0x2ae918: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE91Cu;
            goto label_2ae91c;
        }
    }
    ctx->pc = 0x2AE91Cu;
label_2ae91c:
    // 0x2ae91c: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x2ae91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2ae920: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2ae920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ae924: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AE924u;
    {
        const bool branch_taken_0x2ae924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae924) {
            ctx->pc = 0x2AE928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE924u;
            // 0x2ae928: 0xe6200028  swc1        $f0, 0x28($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE938u;
            goto label_2ae938;
        }
    }
    ctx->pc = 0x2AE92Cu;
    // 0x2ae92c: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x2ae92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2ae930: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2ae930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ae934: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2ae934u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2ae938:
    // 0x2ae938: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2ae938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ae93c: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x2ae93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x2ae940: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2ae940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ae944: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AE944u;
    {
        const bool branch_taken_0x2ae944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE944u;
        // 0x2ae948: 0x24130007  addiu       $s3, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae944) {
            ctx->pc = 0x2AE970u;
            goto label_2ae970;
        }
    }
    ctx->pc = 0x2AE94Cu;
    // 0x2ae94c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ae94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ae950: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2ae950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ae954: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ae954u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ae958: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AE958u;
    SET_GPR_U32(ctx, 31, 0x2AE960u);
    ctx->pc = 0x2AE95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE958u;
    // 0x2ae95c: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AE958u, 0x2AE960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE960u;
label_2ae960:
    // 0x2ae960: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2ae960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ae964: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2ae964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ae968: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2AE968u;
    {
        const bool branch_taken_0x2ae968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE968u;
        // 0x2ae96c: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae968) {
            ctx->pc = 0x2AE97Cu;
            goto label_2ae97c;
        }
    }
    ctx->pc = 0x2AE970u;
label_2ae970:
    // 0x2ae970: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x2ae970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ae974: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2ae974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae978: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ae978u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2ae97c:
    // 0x2ae97c: 0x52760001  beql        $s3, $s6, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AE97Cu;
    {
        const bool branch_taken_0x2ae97c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 22));
        if (branch_taken_0x2ae97c) {
            ctx->pc = 0x2AE980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE97Cu;
            // 0x2ae980: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE984u;
            goto label_2ae984;
        }
    }
    ctx->pc = 0x2AE984u;
label_2ae984:
    // 0x2ae984: 0x52750001  beql        $s3, $s5, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AE984u;
    {
        const bool branch_taken_0x2ae984 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 21));
        if (branch_taken_0x2ae984) {
            ctx->pc = 0x2AE988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE984u;
            // 0x2ae988: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE98Cu;
            goto label_2ae98c;
        }
    }
    ctx->pc = 0x2AE98Cu;
label_2ae98c:
    // 0x2ae98c: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x2ae98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x2ae990: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2ae990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ae994: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AE994u;
    {
        const bool branch_taken_0x2ae994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae994) {
            ctx->pc = 0x2AE998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE994u;
            // 0x2ae998: 0xe620002c  swc1        $f0, 0x2C($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE9A8u;
            goto label_2ae9a8;
        }
    }
    ctx->pc = 0x2AE99Cu;
    // 0x2ae99c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x2ae99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2ae9a0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2ae9a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ae9a4: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2ae9a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2ae9a8:
    // 0x2ae9a8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2ae9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ae9ac: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x2ae9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2ae9b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2ae9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ae9b4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2AE9B4u;
    {
        const bool branch_taken_0x2ae9b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE9B4u;
        // 0x2ae9b8: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae9b4) {
            ctx->pc = 0x2AE9E0u;
            goto label_2ae9e0;
        }
    }
    ctx->pc = 0x2AE9BCu;
    // 0x2ae9bc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ae9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ae9c0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2ae9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ae9c4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ae9c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ae9c8: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2AE9C8u;
    SET_GPR_U32(ctx, 31, 0x2AE9D0u);
    ctx->pc = 0x2AE9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE9C8u;
    // 0x2ae9cc: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2AE9C8u, 0x2AE9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE9D0u;
label_2ae9d0:
    // 0x2ae9d0: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2ae9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ae9d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE9D4u;
    {
        const bool branch_taken_0x2ae9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE9D4u;
        // 0x2ae9d8: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae9d4) {
            ctx->pc = 0x2AE9ECu;
            goto label_2ae9ec;
        }
    }
    ctx->pc = 0x2AE9DCu;
    // 0x2ae9dc: 0x0  nop
    ctx->pc = 0x2ae9dcu;
    // NOP
label_2ae9e0:
    // 0x2ae9e0: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x2ae9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ae9e4: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2ae9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae9e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ae9e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2ae9ec:
    // 0x2ae9ec: 0x52760001  beql        $s3, $s6, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AE9ECu;
    {
        const bool branch_taken_0x2ae9ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 22));
        if (branch_taken_0x2ae9ec) {
            ctx->pc = 0x2AE9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE9ECu;
            // 0x2ae9f0: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE9F4u;
            goto label_2ae9f4;
        }
    }
    ctx->pc = 0x2AE9F4u;
label_2ae9f4:
    // 0x2ae9f4: 0x52750001  beql        $s3, $s5, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AE9F4u;
    {
        const bool branch_taken_0x2ae9f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 21));
        if (branch_taken_0x2ae9f4) {
            ctx->pc = 0x2AE9F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE9F4u;
            // 0x2ae9f8: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE9FCu;
            goto label_2ae9fc;
        }
    }
    ctx->pc = 0x2AE9FCu;
label_2ae9fc:
    // 0x2ae9fc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ae9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2aea00: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x2aea00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2aea04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2aea04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2aea08: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AEA08u;
    {
        const bool branch_taken_0x2aea08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aea08) {
            ctx->pc = 0x2AEA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEA08u;
            // 0x2aea0c: 0xe6200030  swc1        $f0, 0x30($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEA1Cu;
            goto label_2aea1c;
        }
    }
    ctx->pc = 0x2AEA10u;
    // 0x2aea10: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2aea10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2aea14: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2aea14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2aea18: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2aea18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2aea1c:
    // 0x2aea1c: 0x8e4200b4  lw          $v0, 0xB4($s2)
    ctx->pc = 0x2aea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x2aea20: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2aea20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2aea24: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x2aea24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2aea28: 0x1440ff15  bnez        $v0, . + 4 + (-0xEB << 2)
    ctx->pc = 0x2AEA28u;
    {
        const bool branch_taken_0x2aea28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AEA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA28u;
        // 0x2aea2c: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aea28) {
            ctx->pc = 0x2AE680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae680;
        }
    }
    ctx->pc = 0x2AEA30u;
    // 0x2aea30: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2AEA30u;
    {
        const bool branch_taken_0x2aea30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA30u;
        // 0x2aea34: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aea30) {
            ctx->pc = 0x2AEAECu;
            goto label_2aeaec;
        }
    }
    ctx->pc = 0x2AEA38u;
label_2aea38:
    // 0x2aea38: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2aea38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2aea3c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2AEA3Cu;
    {
        const bool branch_taken_0x2aea3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA3Cu;
        // 0x2aea40: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aea3c) {
            ctx->pc = 0x2AEAE8u;
            goto label_2aeae8;
        }
    }
    ctx->pc = 0x2AEA44u;
    // 0x2aea44: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AEA44u;
    SET_GPR_U32(ctx, 31, 0x2AEA4Cu);
    ctx->pc = 0x2AEA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEA44u;
    // 0x2aea48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AEA44u, 0x2AEA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEA4Cu;
label_2aea4c:
    // 0x2aea4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aea4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea50: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2aea50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2aea54: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2AEA54u;
    SET_GPR_U32(ctx, 31, 0x2AEA5Cu);
    ctx->pc = 0x2AEA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEA54u;
    // 0x2aea58: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2AEA54u, 0x2AEA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEA5Cu;
label_2aea5c:
    // 0x2aea5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aea5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea60: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AEA60u;
    SET_GPR_U32(ctx, 31, 0x2AEA68u);
    ctx->pc = 0x2AEA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEA60u;
    // 0x2aea64: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AEA60u, 0x2AEA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEA68u;
label_2aea68:
    // 0x2aea68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aea68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea6c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2aea6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2aea70: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2AEA70u;
    SET_GPR_U32(ctx, 31, 0x2AEA78u);
    ctx->pc = 0x2AEA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEA70u;
    // 0x2aea74: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2AEA70u, 0x2AEA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEA78u;
label_2aea78:
    // 0x2aea78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aea78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea7c: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AEA7Cu;
    SET_GPR_U32(ctx, 31, 0x2AEA84u);
    ctx->pc = 0x2AEA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEA7Cu;
    // 0x2aea80: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AEA7Cu, 0x2AEA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEA84u;
label_2aea84:
    // 0x2aea84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aea84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea88: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2aea88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2aea8c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2AEA8Cu;
    SET_GPR_U32(ctx, 31, 0x2AEA94u);
    ctx->pc = 0x2AEA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEA8Cu;
    // 0x2aea90: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2AEA8Cu, 0x2AEA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEA94u;
label_2aea94:
    // 0x2aea94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aea94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea98: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AEA98u;
    SET_GPR_U32(ctx, 31, 0x2AEAA0u);
    ctx->pc = 0x2AEA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEA98u;
    // 0x2aea9c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AEA98u, 0x2AEAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEAA0u;
label_2aeaa0:
    // 0x2aeaa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aeaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeaa4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2aeaa4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2aeaa8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2AEAA8u;
    SET_GPR_U32(ctx, 31, 0x2AEAB0u);
    ctx->pc = 0x2AEAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEAA8u;
    // 0x2aeaac: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2AEAA8u, 0x2AEAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEAB0u;
label_2aeab0:
    // 0x2aeab0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aeab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeab4: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AEAB4u;
    SET_GPR_U32(ctx, 31, 0x2AEABCu);
    ctx->pc = 0x2AEAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEAB4u;
    // 0x2aeab8: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AEAB4u, 0x2AEABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEABCu;
label_2aeabc:
    // 0x2aeabc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aeabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeac0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2aeac0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2aeac4: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2AEAC4u;
    SET_GPR_U32(ctx, 31, 0x2AEACCu);
    ctx->pc = 0x2AEAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEAC4u;
    // 0x2aeac8: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2AEAC4u, 0x2AEACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEACCu;
label_2aeacc:
    // 0x2aeacc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aeaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aead0: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2AEAD0u;
    SET_GPR_U32(ctx, 31, 0x2AEAD8u);
    ctx->pc = 0x2AEAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEAD0u;
    // 0x2aead4: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2AEAD0u, 0x2AEAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEAD8u;
label_2aead8:
    // 0x2aead8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aead8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeadc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2aeadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2aeae0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2AEAE0u;
    SET_GPR_U32(ctx, 31, 0x2AEAE8u);
    ctx->pc = 0x2AEAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEAE0u;
    // 0x2aeae4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2AEAE0u, 0x2AEAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEAE8u;
label_2aeae8:
    // 0x2aeae8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2aeae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2aeaec:
    // 0x2aeaec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2aeaecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aeaf0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2aeaf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aeaf4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2aeaf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2aeaf8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2aeaf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aeafc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2aeafcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2aeb00: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2aeb00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aeb04: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2aeb04u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2aeb08: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2aeb08u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2aeb0c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2aeb0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2aeb10: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2aeb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2aeb14: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB14u;
        // 0x2aeb18: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEB1Cu;
    // 0x2aeb1c: 0x0  nop
    ctx->pc = 0x2aeb1cu;
    // NOP
    ctx->pc = 0x2aeb20u;
}
