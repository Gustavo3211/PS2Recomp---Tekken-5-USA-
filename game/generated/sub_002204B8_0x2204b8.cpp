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

// Function: sub_002204B8
// Address: 0x2204b8 - 0x220618
void sub_002204B8_0x2204b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002204B8_0x2204b8");
#endif

    switch (ctx->pc) {
        case 0x220504u: goto label_220504;
        case 0x220524u: goto label_220524;
        case 0x220540u: goto label_220540;
        case 0x220564u: goto label_220564;
        case 0x220580u: goto label_220580;
        case 0x22059cu: goto label_22059c;
        case 0x2205b8u: goto label_2205b8;
        case 0x2205d4u: goto label_2205d4;
        default: break;
    }

    ctx->pc = 0x2204b8u;

    // 0x2204b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2204b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2204bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2204bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2204c0: 0x3c120015  lui         $s2, 0x15
    ctx->pc = 0x2204c0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)21 << 16));
    // 0x2204c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2204c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2204c8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2204c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2204cc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2204ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2204d0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2204d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2204d4: 0x26522d30  addiu       $s2, $s2, 0x2D30
    ctx->pc = 0x2204d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 11568));
    // 0x2204d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2204d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2204dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2204dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2204e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2204e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2204e4: 0x142980  sll         $a1, $s4, 6
    ctx->pc = 0x2204e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x2204e8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2204e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2204ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2204ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2204f0: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x2204f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x2204f4: 0x148040  sll         $s0, $s4, 1
    ctx->pc = 0x2204f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x2204f8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2204f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2204fc: 0xc089248  jal         func_224920
    ctx->pc = 0x2204FCu;
    SET_GPR_U32(ctx, 31, 0x220504u);
    ctx->pc = 0x220500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2204FCu;
    // 0x220500: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x2204FCu, 0x220504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220504u;
label_220504:
    // 0x220504: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x220504u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x220508: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x220508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x22050c: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x22050cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x220510: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x220510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220514: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x220514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220518: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x220518u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22051c: 0xc089248  jal         func_224920
    ctx->pc = 0x22051Cu;
    SET_GPR_U32(ctx, 31, 0x220524u);
    ctx->pc = 0x220520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22051Cu;
    // 0x220520: 0x34c60002  ori         $a2, $a2, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x22051Cu, 0x220524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220524u;
label_220524:
    // 0x220524: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x220524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220528: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x220528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x22052c: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x22052cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x220530: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x220530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220534: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x220534u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220538: 0xc089248  jal         func_224920
    ctx->pc = 0x220538u;
    SET_GPR_U32(ctx, 31, 0x220540u);
    ctx->pc = 0x22053Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220538u;
    // 0x22053c: 0x34c60004  ori         $a2, $a2, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x220538u, 0x220540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220540u;
label_220540:
    // 0x220540: 0x1428c0  sll         $a1, $s4, 3
    ctx->pc = 0x220540u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x220544: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x220544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x220548: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x220548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x22054c: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x22054cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x220550: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x220550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220554: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x220554u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220558: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x220558u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x22055c: 0xc089248  jal         func_224920
    ctx->pc = 0x22055Cu;
    SET_GPR_U32(ctx, 31, 0x220564u);
    ctx->pc = 0x220560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22055Cu;
    // 0x220560: 0x34c60006  ori         $a2, $a2, 0x6 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x22055Cu, 0x220564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220564u;
label_220564:
    // 0x220564: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x220564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220568: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x220568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x22056c: 0x3c060007  lui         $a2, 0x7
    ctx->pc = 0x22056cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7 << 16));
    // 0x220570: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x220570u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220574: 0x24050f30  addiu       $a1, $zero, 0xF30
    ctx->pc = 0x220574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3888));
    // 0x220578: 0xc089248  jal         func_224920
    ctx->pc = 0x220578u;
    SET_GPR_U32(ctx, 31, 0x220580u);
    ctx->pc = 0x22057Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220578u;
    // 0x22057c: 0x34c60008  ori         $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x220578u, 0x220580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220580u;
label_220580:
    // 0x220580: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x220580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220584: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x220584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x220588: 0x3c060007  lui         $a2, 0x7
    ctx->pc = 0x220588u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7 << 16));
    // 0x22058c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x22058cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220590: 0x24051560  addiu       $a1, $zero, 0x1560
    ctx->pc = 0x220590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5472));
    // 0x220594: 0xc089248  jal         func_224920
    ctx->pc = 0x220594u;
    SET_GPR_U32(ctx, 31, 0x22059Cu);
    ctx->pc = 0x220598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220594u;
    // 0x220598: 0x34c6000a  ori         $a2, $a2, 0xA (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)10);
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x220594u, 0x22059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22059Cu;
label_22059c:
    // 0x22059c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22059cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2205a0: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x2205a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x2205a4: 0x3c060007  lui         $a2, 0x7
    ctx->pc = 0x2205a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7 << 16));
    // 0x2205a8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2205a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2205ac: 0x24051e00  addiu       $a1, $zero, 0x1E00
    ctx->pc = 0x2205acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x2205b0: 0xc089248  jal         func_224920
    ctx->pc = 0x2205B0u;
    SET_GPR_U32(ctx, 31, 0x2205B8u);
    ctx->pc = 0x2205B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2205B0u;
    // 0x2205b4: 0x34c6000c  ori         $a2, $a2, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x2205B0u, 0x2205B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2205B8u;
label_2205b8:
    // 0x2205b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2205b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2205bc: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x2205bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x2205c0: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2205c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x2205c4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2205c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2205c8: 0x24051080  addiu       $a1, $zero, 0x1080
    ctx->pc = 0x2205c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4224));
    // 0x2205cc: 0xc089248  jal         func_224920
    ctx->pc = 0x2205CCu;
    SET_GPR_U32(ctx, 31, 0x2205D4u);
    ctx->pc = 0x2205D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2205CCu;
    // 0x2205d0: 0x34c6000f  ori         $a2, $a2, 0xF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)15);
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x2205CCu, 0x2205D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2205D4u;
label_2205d4:
    // 0x2205d4: 0x24430f40  addiu       $v1, $v0, 0xF40
    ctx->pc = 0x2205d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3904));
    // 0x2205d8: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x2205d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x2205dc: 0x24450b00  addiu       $a1, $v0, 0xB00
    ctx->pc = 0x2205dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2816));
    // 0x2205e0: 0x24460d60  addiu       $a2, $v0, 0xD60
    ctx->pc = 0x2205e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3424));
    // 0x2205e4: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x2205e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
    // 0x2205e8: 0xae24003c  sw          $a0, 0x3C($s1)
    ctx->pc = 0x2205e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 4));
    // 0x2205ec: 0xae250040  sw          $a1, 0x40($s1)
    ctx->pc = 0x2205ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 5));
    // 0x2205f0: 0xae260044  sw          $a2, 0x44($s1)
    ctx->pc = 0x2205f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 6));
    // 0x2205f4: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x2205f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x2205f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2205f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2205fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2205fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220600: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x220600u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220604: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x220604u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220608: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x220608u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22060c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x22060cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x220610: 0x3e00008  jr          $ra
    ctx->pc = 0x220610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220610u;
        // 0x220614: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220618u;
}
