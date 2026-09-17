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

// Function: sub_0032E3F0
// Address: 0x32e3f0 - 0x32e5f0
void sub_0032E3F0_0x32e3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032E3F0_0x32e3f0");
#endif

    switch (ctx->pc) {
        case 0x32e420u: goto label_32e420;
        case 0x32e438u: goto label_32e438;
        case 0x32e468u: goto label_32e468;
        case 0x32e480u: goto label_32e480;
        case 0x32e4b0u: goto label_32e4b0;
        case 0x32e500u: goto label_32e500;
        case 0x32e538u: goto label_32e538;
        default: break;
    }

    ctx->pc = 0x32e3f0u;

    // 0x32e3f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x32e3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x32e3f4: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x32e3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x32e3f8: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x32e3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x32e3fc: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x32e3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x32e400: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x32e400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x32e404: 0xfa1c0000  sqc2        $vf28, 0x0($s0)
    ctx->pc = 0x32e404u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x32e408: 0xfbbd0060  sqc2        $vf29, 0x60($sp)
    ctx->pc = 0x32e408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x32e40c: 0xfbbe0070  sqc2        $vf30, 0x70($sp)
    ctx->pc = 0x32e40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x32e410: 0xfbbf0080  sqc2        $vf31, 0x80($sp)
    ctx->pc = 0x32e410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x32e414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32e414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e418: 0xc0cb874  jal         func_32E1D0
    ctx->pc = 0x32E418u;
    SET_GPR_U32(ctx, 31, 0x32E420u);
    ctx->pc = 0x32E41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E418u;
    // 0x32e41c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E1D0u, 0x32E418u, 0x32E420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E420u;
label_32e420:
    // 0x32e420: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x32e420u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32e424: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x32e424u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32e428: 0x45010064  bc1t        . + 4 + (0x64 << 2)
    ctx->pc = 0x32E428u;
    {
        const bool branch_taken_0x32e428 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x32E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E428u;
        // 0x32e42c: 0x27ae0010  addiu       $t6, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e428) {
            ctx->pc = 0x32E5BCu;
            goto label_32e5bc;
        }
    }
    ctx->pc = 0x32E430u;
    // 0x32e430: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x32e430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x32e434: 0x27a2004c  addiu       $v0, $sp, 0x4C
    ctx->pc = 0x32e434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_32e438:
    // 0x32e438: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x32e438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x32e43c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x32e43cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x32e440: 0x0  nop
    ctx->pc = 0x32e440u;
    // NOP
    // 0x32e444: 0x0  nop
    ctx->pc = 0x32e444u;
    // NOP
    // 0x32e448: 0x0  nop
    ctx->pc = 0x32e448u;
    // NOP
    // 0x32e44c: 0x4e1fffa  bgez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32E44Cu;
    {
        const bool branch_taken_0x32e44c = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x32E450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E44Cu;
        // 0x32e450: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e44c) {
            ctx->pc = 0x32E438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32e438;
        }
    }
    ctx->pc = 0x32E454u;
    // 0x32e454: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x32e454u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e458: 0x1c0882d  daddu       $s1, $t6, $zero
    ctx->pc = 0x32e458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e45c: 0x200c82d  daddu       $t9, $s0, $zero
    ctx->pc = 0x32e45cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e460: 0x1c0c02d  daddu       $t8, $t6, $zero
    ctx->pc = 0x32e460u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e464: 0x1c0782d  daddu       $t7, $t6, $zero
    ctx->pc = 0x32e464u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_32e468:
    // 0x32e468: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x32e468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x32e46c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32e46cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e470: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x32e470u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e474: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x32e474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x32e478: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x32e478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e47c: 0x0  nop
    ctx->pc = 0x32e47cu;
    // NOP
label_32e480:
    // 0x32e480: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x32e480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32e484: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x32e484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x32e488: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x32e488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x32e48c: 0x106b0002  beq         $v1, $t3, . + 4 + (0x2 << 2)
    ctx->pc = 0x32E48Cu;
    {
        const bool branch_taken_0x32e48c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        if (branch_taken_0x32e48c) {
            ctx->pc = 0x32E498u;
            goto label_32e498;
        }
    }
    ctx->pc = 0x32E494u;
    // 0x32e494: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x32e494u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_32e498:
    // 0x32e498: 0x58e0000e  blezl       $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x32E498u;
    {
        const bool branch_taken_0x32e498 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x32e498) {
            ctx->pc = 0x32E49Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32E498u;
            // 0x32e49c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32E4D4u;
            goto label_32e4d4;
        }
    }
    ctx->pc = 0x32E4A0u;
    // 0x32e4a0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x32e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x32e4a4: 0x1181821  addu        $v1, $t0, $t8
    ctx->pc = 0x32e4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 24)));
    // 0x32e4a8: 0x591021  addu        $v0, $v0, $t9
    ctx->pc = 0x32e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x32e4ac: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x32e4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_32e4b0:
    // 0x32e4b0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x32e4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32e4b4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x32e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x32e4b8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x32e4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32e4bc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x32e4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x32e4c0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x32e4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x32e4c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32e4c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32e4c8: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x32E4C8u;
    {
        const bool branch_taken_0x32e4c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E4C8u;
        // 0x32e4cc: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e4c8) {
            ctx->pc = 0x32E4B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32e4b0;
        }
    }
    ctx->pc = 0x32E4D0u;
    // 0x32e4d0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x32e4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_32e4d4:
    // 0x32e4d4: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x32e4d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x32e4d8: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x32e4d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x32e4dc: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x32e4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x32e4e0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x32E4E0u;
    {
        const bool branch_taken_0x32e4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E4E0u;
        // 0x32e4e4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e4e0) {
            ctx->pc = 0x32E480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32e480;
        }
    }
    ctx->pc = 0x32E4E8u;
    // 0x32e4e8: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x32e4e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e4ec: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x32e4ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32e4f0: 0x25e80030  addiu       $t0, $t7, 0x30
    ctx->pc = 0x32e4f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 48));
    // 0x32e4f4: 0x140682d  daddu       $t5, $t2, $zero
    ctx->pc = 0x32e4f4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e4f8: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x32e4f8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e4fc: 0x27a9000c  addiu       $t1, $sp, 0xC
    ctx->pc = 0x32e4fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_32e500:
    // 0x32e500: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x32e500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x32e504: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x32e504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x32e508: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x32e508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x32e50c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x32E50Cu;
    {
        const bool branch_taken_0x32e50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E50Cu;
        // 0x32e510: 0xc5020000  lwc1        $f2, 0x0($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e50c) {
            ctx->pc = 0x32E568u;
            goto label_32e568;
        }
    }
    ctx->pc = 0x32E514u;
    // 0x32e514: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x32e514u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32e518: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x32e518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32e51c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x32e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x32e520: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x32e520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x32e524: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32e524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32e528: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32e528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32e52c: 0x4c2821  addu        $a1, $v0, $t4
    ctx->pc = 0x32e52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x32e530: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x32e530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x32e534: 0x0  nop
    ctx->pc = 0x32e534u;
    // NOP
label_32e538:
    // 0x32e538: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x32e538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32e53c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x32e53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x32e540: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x32e540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32e544: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x32e544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x32e548: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x32e548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x32e54c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32e54cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32e550: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x32e550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x32e554: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x32E554u;
    {
        const bool branch_taken_0x32e554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E554u;
        // 0x32e558: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e554) {
            ctx->pc = 0x32E538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32e538;
        }
    }
    ctx->pc = 0x32E55Cu;
    // 0x32e55c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32E55Cu;
    {
        const bool branch_taken_0x32e55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E55Cu;
        // 0x32e560: 0xc71021  addu        $v0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e55c) {
            ctx->pc = 0x32E570u;
            goto label_32e570;
        }
    }
    ctx->pc = 0x32E564u;
    // 0x32e564: 0x0  nop
    ctx->pc = 0x32e564u;
    // NOP
label_32e568:
    // 0x32e568: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x32e568u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32e56c: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x32e56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_32e570:
    // 0x32e570: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x32e570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x32e574: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32e574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32e578: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x32e578u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x32e57c: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x32e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x32e580: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x32e580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32e584: 0x0  nop
    ctx->pc = 0x32e584u;
    // NOP
    // 0x32e588: 0x0  nop
    ctx->pc = 0x32e588u;
    // NOP
    // 0x32e58c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x32e58cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x32e590: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x32e590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x32e594: 0x4e1ffda  bgez        $a3, . + 4 + (-0x26 << 2)
    ctx->pc = 0x32E594u;
    {
        const bool branch_taken_0x32e594 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x32E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E594u;
        // 0x32e598: 0x2508fff0  addiu       $t0, $t0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e594) {
            ctx->pc = 0x32E500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32e500;
        }
    }
    ctx->pc = 0x32E59Cu;
    // 0x32e59c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x32e59cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x32e5a0: 0x29620004  slti        $v0, $t3, 0x4
    ctx->pc = 0x32e5a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x32e5a4: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x32E5A4u;
    {
        const bool branch_taken_0x32e5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E5A4u;
        // 0x32e5a8: 0x25ef0004  addiu       $t7, $t7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e5a4) {
            ctx->pc = 0x32E468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32e468;
        }
    }
    ctx->pc = 0x32E5ACu;
    // 0x32e5ac: 0xd9dc0000  lqc2        $vf28, 0x0($t6)
    ctx->pc = 0x32e5acu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x32e5b0: 0xd9dd0010  lqc2        $vf29, 0x10($t6)
    ctx->pc = 0x32e5b0u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x32e5b4: 0xd9de0020  lqc2        $vf30, 0x20($t6)
    ctx->pc = 0x32e5b4u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 32)));
    // 0x32e5b8: 0xd9df0030  lqc2        $vf31, 0x30($t6)
    ctx->pc = 0x32e5b8u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 48)));
label_32e5bc:
    // 0x32e5bc: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x32e5bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x32e5c0: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x32e5c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x32e5c4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x32e5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32e5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x32E5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E5C8u;
        // 0x32e5cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E5D0u;
    // 0x32e5d0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32e5d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e5d4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x32e5d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32e5d8: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x32e5d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32e5dc: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x32e5dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32e5e0: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x32e5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32e5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x32E5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E5ECu;
    // 0x32e5ec: 0x0  nop
    ctx->pc = 0x32e5ecu;
    // NOP
    ctx->pc = 0x32e5f0u;
}
