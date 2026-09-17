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

// Function: sub_005048F8
// Address: 0x5048f8 - 0x504af8
void sub_005048F8_0x5048f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005048F8_0x5048f8");
#endif

    switch (ctx->pc) {
        case 0x504920u: goto label_504920;
        case 0x504938u: goto label_504938;
        case 0x50494cu: goto label_50494c;
        case 0x5049a0u: goto label_5049a0;
        case 0x5049b8u: goto label_5049b8;
        case 0x5049ccu: goto label_5049cc;
        case 0x504a20u: goto label_504a20;
        case 0x504a38u: goto label_504a38;
        case 0x504a4cu: goto label_504a4c;
        case 0x504aa0u: goto label_504aa0;
        case 0x504ab8u: goto label_504ab8;
        case 0x504accu: goto label_504acc;
        default: break;
    }

    ctx->pc = 0x5048f8u;

    // 0x5048f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5048f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x5048fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5048fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x504900: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x504900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x504904: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x504904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504908: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x504908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x50490c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x50490cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504910: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x504910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x504914: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x504914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x504918: 0xc144abc  jal         func_512AF0
    ctx->pc = 0x504918u;
    SET_GPR_U32(ctx, 31, 0x504920u);
    ctx->pc = 0x50491Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504918u;
    // 0x50491c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AF0u, 0x504918u, 0x504920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504920u;
label_504920:
    // 0x504920: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x504920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504924: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x504924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50492c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x50492cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504930: 0xc14119e  jal         func_504678
    ctx->pc = 0x504930u;
    SET_GPR_U32(ctx, 31, 0x504938u);
    ctx->pc = 0x504934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504930u;
    // 0x504934: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x504678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x504678u, 0x504930u, 0x504938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504938u;
label_504938:
    // 0x504938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50493c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x50493cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504940: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x504940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504944: 0xc14116c  jal         func_5045B0
    ctx->pc = 0x504944u;
    SET_GPR_U32(ctx, 31, 0x50494Cu);
    ctx->pc = 0x504948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504944u;
    // 0x504948: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5045B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5045B0u, 0x504944u, 0x50494Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50494Cu;
label_50494c:
    // 0x50494c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x50494cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504950: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x504950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504954: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x504954u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x504958: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x504958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50495c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x50495cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x504960: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x504960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504964: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x504964u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x504968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x504968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50496c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x50496cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x504970: 0x81411ce  j           func_504738
    ctx->pc = 0x504970u;
    ctx->pc = 0x504974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504970u;
    // 0x504974: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x504738u;
    sub_00504738_0x504738(rdram, ctx, runtime); return;
    ctx->pc = 0x504978u;
    // 0x504978: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x504978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x50497c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x50497cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x504980: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x504980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x504984: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x504984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504988: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x504988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x50498c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x50498cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504990: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x504990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x504994: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x504994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x504998: 0xc144abc  jal         func_512AF0
    ctx->pc = 0x504998u;
    SET_GPR_U32(ctx, 31, 0x5049A0u);
    ctx->pc = 0x50499Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504998u;
    // 0x50499c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AF0u, 0x504998u, 0x5049A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5049A0u;
label_5049a0:
    // 0x5049a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x5049a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5049a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x5049a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5049a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5049a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5049ac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x5049acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5049b0: 0xc14119e  jal         func_504678
    ctx->pc = 0x5049B0u;
    SET_GPR_U32(ctx, 31, 0x5049B8u);
    ctx->pc = 0x5049B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5049B0u;
    // 0x5049b4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x504678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x504678u, 0x5049B0u, 0x5049B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5049B8u;
label_5049b8:
    // 0x5049b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5049b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5049bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x5049bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5049c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x5049c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5049c4: 0xc1411ce  jal         func_504738
    ctx->pc = 0x5049C4u;
    SET_GPR_U32(ctx, 31, 0x5049CCu);
    ctx->pc = 0x5049C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5049C4u;
    // 0x5049c8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x504738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x504738u, 0x5049C4u, 0x5049CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5049CCu;
label_5049cc:
    // 0x5049cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5049ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5049d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x5049d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5049d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5049d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5049d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x5049d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5049dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x5049dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5049e0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x5049e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5049e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x5049e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5049e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5049e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5049ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5049ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5049f0: 0x814116c  j           func_5045B0
    ctx->pc = 0x5049F0u;
    ctx->pc = 0x5049F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5049F0u;
    // 0x5049f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5045B0u;
    sub_005045B0_0x5045b0(rdram, ctx, runtime); return;
    ctx->pc = 0x5049F8u;
    // 0x5049f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5049f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x5049fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5049fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x504a00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x504a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x504a04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x504a04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504a08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x504a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x504a0c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x504a0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504a10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x504a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x504a14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x504a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x504a18: 0xc144abc  jal         func_512AF0
    ctx->pc = 0x504A18u;
    SET_GPR_U32(ctx, 31, 0x504A20u);
    ctx->pc = 0x504A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504A18u;
    // 0x504a1c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AF0u, 0x504A18u, 0x504A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504A20u;
label_504a20:
    // 0x504a20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x504a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504a24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x504a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504a2c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x504a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504a30: 0xc1411ce  jal         func_504738
    ctx->pc = 0x504A30u;
    SET_GPR_U32(ctx, 31, 0x504A38u);
    ctx->pc = 0x504A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504A30u;
    // 0x504a34: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x504738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x504738u, 0x504A30u, 0x504A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504A38u;
label_504a38:
    // 0x504a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504a3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x504a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504a40: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x504a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504a44: 0xc14116c  jal         func_5045B0
    ctx->pc = 0x504A44u;
    SET_GPR_U32(ctx, 31, 0x504A4Cu);
    ctx->pc = 0x504A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504A44u;
    // 0x504a48: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5045B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5045B0u, 0x504A44u, 0x504A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504A4Cu;
label_504a4c:
    // 0x504a4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504a50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x504a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504a54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x504a54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x504a58: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x504a58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504a5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x504a5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x504a60: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x504a60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504a64: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x504a64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x504a68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x504a68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x504a6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x504a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x504a70: 0x814119e  j           func_504678
    ctx->pc = 0x504A70u;
    ctx->pc = 0x504A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504A70u;
    // 0x504a74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x504678u;
    sub_00504678_0x504678(rdram, ctx, runtime); return;
    ctx->pc = 0x504A78u;
    // 0x504a78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x504a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x504a7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x504a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x504a80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x504a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x504a84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x504a84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504a88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x504a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x504a8c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x504a8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504a90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x504a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x504a94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x504a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x504a98: 0xc144abc  jal         func_512AF0
    ctx->pc = 0x504A98u;
    SET_GPR_U32(ctx, 31, 0x504AA0u);
    ctx->pc = 0x504A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504A98u;
    // 0x504a9c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AF0u, 0x504A98u, 0x504AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504AA0u;
label_504aa0:
    // 0x504aa0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x504aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504aa4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x504aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504aa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504aac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x504aacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504ab0: 0xc1411ce  jal         func_504738
    ctx->pc = 0x504AB0u;
    SET_GPR_U32(ctx, 31, 0x504AB8u);
    ctx->pc = 0x504AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504AB0u;
    // 0x504ab4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x504738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x504738u, 0x504AB0u, 0x504AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504AB8u;
label_504ab8:
    // 0x504ab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504abc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x504abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504ac0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x504ac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504ac4: 0xc14119e  jal         func_504678
    ctx->pc = 0x504AC4u;
    SET_GPR_U32(ctx, 31, 0x504ACCu);
    ctx->pc = 0x504AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504AC4u;
    // 0x504ac8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x504678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x504678u, 0x504AC4u, 0x504ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504ACCu;
label_504acc:
    // 0x504acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504ad0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x504ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504ad4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x504ad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x504ad8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x504ad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504adc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x504adcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x504ae0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x504ae0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504ae4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x504ae4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x504ae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x504ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x504aec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x504aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x504af0: 0x814116c  j           func_5045B0
    ctx->pc = 0x504AF0u;
    ctx->pc = 0x504AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504AF0u;
    // 0x504af4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5045B0u;
    sub_005045B0_0x5045b0(rdram, ctx, runtime); return;
    ctx->pc = 0x504AF8u;
}
