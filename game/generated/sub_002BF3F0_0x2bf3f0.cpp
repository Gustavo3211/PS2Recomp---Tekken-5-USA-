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

// Function: sub_002BF3F0
// Address: 0x2bf3f0 - 0x2bf728
void sub_002BF3F0_0x2bf3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF3F0_0x2bf3f0");
#endif

    switch (ctx->pc) {
        case 0x2bf4f0u: goto label_2bf4f0;
        case 0x2bf538u: goto label_2bf538;
        case 0x2bf660u: goto label_2bf660;
        case 0x2bf680u: goto label_2bf680;
        case 0x2bf6acu: goto label_2bf6ac;
        case 0x2bf6bcu: goto label_2bf6bc;
        case 0x2bf6e4u: goto label_2bf6e4;
        case 0x2bf6f4u: goto label_2bf6f4;
        default: break;
    }

    ctx->pc = 0x2bf3f0u;

    // 0x2bf3f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2bf3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2bf3f4: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2bf3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2bf3f8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2bf3f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf3fc: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x2bf3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x2bf400: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2bf400u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf404: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2bf404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2bf408: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2bf408u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf40c: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x2bf40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2bf410: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x2bf410u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf414: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2bf414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2bf418: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x2bf418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf41c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2bf41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2bf420: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x2bf420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x2bf424: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2bf424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2bf428: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x2bf428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x2bf42c: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2BF42Cu;
    {
        const bool branch_taken_0x2bf42c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF42Cu;
        // 0x2bf430: 0xffbf00a8  sd          $ra, 0xA8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf42c) {
            ctx->pc = 0x2BF460u;
            goto label_2bf460;
        }
    }
    ctx->pc = 0x2BF434u;
    // 0x2bf434: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x2bf434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2bf438: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x2bf438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2bf43c: 0x24170010  addiu       $s7, $zero, 0x10
    ctx->pc = 0x2bf43cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2bf440: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2bf440u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf444: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2bf444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x2bf448: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x2bf448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2bf44c: 0x2414000e  addiu       $s4, $zero, 0xE
    ctx->pc = 0x2bf44cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2bf450: 0x2413000f  addiu       $s3, $zero, 0xF
    ctx->pc = 0x2bf450u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2bf454: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2BF454u;
    {
        const bool branch_taken_0x2bf454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF454u;
        // 0x2bf458: 0xafa40054  sw          $a0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf454) {
            ctx->pc = 0x2BF484u;
            goto label_2bf484;
        }
    }
    ctx->pc = 0x2BF45Cu;
    // 0x2bf45c: 0x0  nop
    ctx->pc = 0x2bf45cu;
    // NOP
label_2bf460:
    // 0x2bf460: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x2bf460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2bf464: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x2bf464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2bf468: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2bf468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x2bf46c: 0x24170014  addiu       $s7, $zero, 0x14
    ctx->pc = 0x2bf46cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2bf470: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x2bf470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x2bf474: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2bf474u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf478: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x2bf478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2bf47c: 0x24140012  addiu       $s4, $zero, 0x12
    ctx->pc = 0x2bf47cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2bf480: 0x24130013  addiu       $s3, $zero, 0x13
    ctx->pc = 0x2bf480u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2bf484:
    // 0x2bf484: 0x1710c0  sll         $v0, $s7, 3
    ctx->pc = 0x2bf484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    // 0x2bf488: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2bf488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bf48c: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x2bf48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x2bf490: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x2bf490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2bf494: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2bf494u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2bf498: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x2bf498u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2bf49c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2bf49cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2bf4a0: 0xafa4005c  sw          $a0, 0x5C($sp)
    ctx->pc = 0x2bf4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
    // 0x2bf4a4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2bf4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2bf4a8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2bf4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bf4ac: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2bf4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2bf4b0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2bf4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2bf4b4: 0x24510070  addiu       $s1, $v0, 0x70
    ctx->pc = 0x2bf4b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2bf4b8: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x2bf4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2bf4bc: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x2bf4bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bf4c0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2bf4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2bf4c4: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x2bf4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2bf4c8: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x2bf4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x2bf4cc: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x2bf4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    // 0x2bf4d0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2bf4d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf4d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bf4d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bf4d8: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x2bf4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x2bf4dc: 0x24c60070  addiu       $a2, $a2, 0x70
    ctx->pc = 0x2bf4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x2bf4e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bf4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf4e4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2bf4e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf4e8: 0xc0afbf2  jal         func_2BEFC8
    ctx->pc = 0x2BF4E8u;
    SET_GPR_U32(ctx, 31, 0x2BF4F0u);
    ctx->pc = 0x2BF4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF4E8u;
    // 0x2bf4ec: 0x3c0502d  daddu       $t2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEFC8u, 0x2BF4E8u, 0x2BF4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF4F0u;
label_2bf4f0:
    // 0x2bf4f0: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x2BF4F0u;
    {
        const bool branch_taken_0x2bf4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF4F0u;
        // 0x2bf4f4: 0x1480c0  sll         $s0, $s4, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf4f0) {
            ctx->pc = 0x2BF6F4u;
            goto label_2bf6f4;
        }
    }
    ctx->pc = 0x2BF4F8u;
    // 0x2bf4f8: 0x1348c0  sll         $t1, $s3, 3
    ctx->pc = 0x2bf4f8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2bf4fc: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x2bf4fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x2bf500: 0x1334821  addu        $t1, $t1, $s3
    ctx->pc = 0x2bf500u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
    // 0x2bf504: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x2bf504u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2bf508: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x2bf508u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x2bf50c: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x2bf50cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2bf510: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2bf510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf514: 0x2494821  addu        $t1, $s2, $t1
    ctx->pc = 0x2bf514u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x2bf518: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2bf518u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf51c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bf51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf520: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2bf520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf524: 0x26470790  addiu       $a3, $s2, 0x790
    ctx->pc = 0x2bf524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1936));
    // 0x2bf528: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2bf528u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf52c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2bf52cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf530: 0xc0afa12  jal         func_2BE848
    ctx->pc = 0x2BF530u;
    SET_GPR_U32(ctx, 31, 0x2BF538u);
    ctx->pc = 0x2BF534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF530u;
    // 0x2bf534: 0xafbe0000  sw          $fp, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE848u, 0x2BF530u, 0x2BF538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF538u;
label_2bf538:
    // 0x2bf538: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x2bf538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2bf53c: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x2bf53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2bf540: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2bf540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2bf544: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x2bf544u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bf548: 0xd8490010  lqc2        $vf9, 0x10($v0)
    ctx->pc = 0x2bf548u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2bf54c: 0xd84a0020  lqc2        $vf10, 0x20($v0)
    ctx->pc = 0x2bf54cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2bf550: 0xd84b0030  lqc2        $vf11, 0x30($v0)
    ctx->pc = 0x2bf550u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2bf554: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2bf554u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bf558: 0xda050010  lqc2        $vf5, 0x10($s0)
    ctx->pc = 0x2bf558u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2bf55c: 0xda060020  lqc2        $vf6, 0x20($s0)
    ctx->pc = 0x2bf55cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2bf560: 0xda070030  lqc2        $vf7, 0x30($s0)
    ctx->pc = 0x2bf560u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2bf564: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x2bf564u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bf568: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x2bf568u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bf56c: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x2bf56cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bf570: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x2bf570u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bf574: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x2bf574u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bf578: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x2bf578u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bf57c: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x2bf57cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bf580: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x2bf580u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2bf584: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x2bf584u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bf588: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x2bf588u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bf58c: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x2bf58cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bf590: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x2bf590u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2bf594: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x2bf594u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bf598: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x2bf598u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bf59c: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x2bf59cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bf5a0: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x2bf5a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2bf5a4: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2bf5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bf5a8: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x2bf5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2bf5ac: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x2bf5acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2bf5b0: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x2bf5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2bf5b4: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x2bf5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2bf5b8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2bf5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2bf5bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2bf5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2bf5c0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2bf5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2bf5c4: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x2bf5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2bf5c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bf5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf5cc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2bf5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2bf5d0: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x2bf5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2bf5d4: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x2bf5d4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf5d8: 0xd8690010  lqc2        $vf9, 0x10($v1)
    ctx->pc = 0x2bf5d8u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2bf5dc: 0xd86a0020  lqc2        $vf10, 0x20($v1)
    ctx->pc = 0x2bf5dcu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2bf5e0: 0xd86b0030  lqc2        $vf11, 0x30($v1)
    ctx->pc = 0x2bf5e0u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2bf5e4: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2bf5e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bf5e8: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x2bf5e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2bf5ec: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x2bf5ecu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2bf5f0: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x2bf5f0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2bf5f4: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x2bf5f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bf5f8: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x2bf5f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bf5fc: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x2bf5fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bf600: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x2bf600u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bf604: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x2bf604u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bf608: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x2bf608u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bf60c: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x2bf60cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bf610: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x2bf610u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2bf614: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x2bf614u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bf618: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x2bf618u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bf61c: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x2bf61cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bf620: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x2bf620u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2bf624: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x2bf624u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bf628: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x2bf628u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bf62c: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x2bf62cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bf630: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x2bf630u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2bf634: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2bf634u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bf638: 0xf8450010  sqc2        $vf5, 0x10($v0)
    ctx->pc = 0x2bf638u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2bf63c: 0xf8460020  sqc2        $vf6, 0x20($v0)
    ctx->pc = 0x2bf63cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2bf640: 0xf8470030  sqc2        $vf7, 0x30($v0)
    ctx->pc = 0x2bf640u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2bf644: 0x1328c0  sll         $a1, $s3, 3
    ctx->pc = 0x2bf644u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2bf648: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2bf648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bf64c: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x2bf64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x2bf650: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2bf650u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2bf654: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x2bf654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2bf658: 0xc084986  jal         func_212618
    ctx->pc = 0x2BF658u;
    SET_GPR_U32(ctx, 31, 0x2BF660u);
    ctx->pc = 0x2BF65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF658u;
    // 0x2bf65c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212618u, 0x2BF658u, 0x2BF660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF660u;
label_2bf660:
    // 0x2bf660: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2bf660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2bf664: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2bf664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bf668: 0x978821  addu        $s1, $a0, $s7
    ctx->pc = 0x2bf668u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x2bf66c: 0x118900  sll         $s1, $s1, 4
    ctx->pc = 0x2bf66cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2bf670: 0x2518821  addu        $s1, $s2, $s1
    ctx->pc = 0x2bf670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x2bf674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bf674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf678: 0xc096ee8  jal         func_25BBA0
    ctx->pc = 0x2BF678u;
    SET_GPR_U32(ctx, 31, 0x2BF680u);
    ctx->pc = 0x2BF67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF678u;
    // 0x2bf67c: 0x26260040  addiu       $a2, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BBA0u, 0x2BF678u, 0x2BF680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF680u;
label_2bf680:
    // 0x2bf680: 0x26310070  addiu       $s1, $s1, 0x70
    ctx->pc = 0x2bf680u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x2bf684: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x2bf684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2bf688: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2bf688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf68c: 0x280c0  sll         $s0, $v0, 3
    ctx->pc = 0x2bf68cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2bf690: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2bf690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2bf694: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x2bf694u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2bf698: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x2bf698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2bf69c: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x2bf69cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2bf6a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bf6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf6a4: 0xc08477c  jal         func_211DF0
    ctx->pc = 0x2BF6A4u;
    SET_GPR_U32(ctx, 31, 0x2BF6ACu);
    ctx->pc = 0x2BF6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF6A4u;
    // 0x2bf6a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DF0u, 0x2BF6A4u, 0x2BF6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF6ACu;
label_2bf6ac:
    // 0x2bf6ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bf6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf6b0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2bf6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf6b4: 0xc08478c  jal         func_211E30
    ctx->pc = 0x2BF6B4u;
    SET_GPR_U32(ctx, 31, 0x2BF6BCu);
    ctx->pc = 0x2BF6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF6B4u;
    // 0x2bf6b8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E30u, 0x2BF6B4u, 0x2BF6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF6BCu;
label_2bf6bc:
    // 0x2bf6bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2bf6bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf6c0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2bf6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bf6c4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x2bf6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2bf6c8: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x2bf6c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bf6cc: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x2bf6ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2bf6d0: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x2bf6d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2bf6d4: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x2bf6d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2bf6d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bf6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf6dc: 0xc08477c  jal         func_211DF0
    ctx->pc = 0x2BF6DCu;
    SET_GPR_U32(ctx, 31, 0x2BF6E4u);
    ctx->pc = 0x2BF6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF6DCu;
    // 0x2bf6e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DF0u, 0x2BF6DCu, 0x2BF6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF6E4u;
label_2bf6e4:
    // 0x2bf6e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bf6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf6e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2bf6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf6ec: 0xc08478c  jal         func_211E30
    ctx->pc = 0x2BF6ECu;
    SET_GPR_U32(ctx, 31, 0x2BF6F4u);
    ctx->pc = 0x2BF6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF6ECu;
    // 0x2bf6f0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E30u, 0x2BF6ECu, 0x2BF6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF6F4u;
label_2bf6f4:
    // 0x2bf6f4: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2bf6f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bf6f8: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x2bf6f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2bf6fc: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2bf6fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bf700: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x2bf700u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2bf704: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2bf704u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bf708: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x2bf708u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2bf70c: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2bf70cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bf710: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x2bf710u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2bf714: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x2bf714u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2bf718: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x2bf718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2bf71c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF71Cu;
        // 0x2bf720: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF724u;
    // 0x2bf724: 0x0  nop
    ctx->pc = 0x2bf724u;
    // NOP
    ctx->pc = 0x2bf728u;
}
