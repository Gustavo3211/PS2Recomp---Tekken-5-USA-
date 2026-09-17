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

// Function: sub_002BEFC8
// Address: 0x2befc8 - 0x2bf3f0
void sub_002BEFC8_0x2befc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BEFC8_0x2befc8");
#endif

    switch (ctx->pc) {
        case 0x2bf08cu: goto label_2bf08c;
        case 0x2bf0a4u: goto label_2bf0a4;
        case 0x2bf0b8u: goto label_2bf0b8;
        case 0x2bf0ccu: goto label_2bf0cc;
        case 0x2bf0e8u: goto label_2bf0e8;
        case 0x2bf0f8u: goto label_2bf0f8;
        case 0x2bf108u: goto label_2bf108;
        case 0x2bf124u: goto label_2bf124;
        case 0x2bf20cu: goto label_2bf20c;
        case 0x2bf21cu: goto label_2bf21c;
        case 0x2bf2c4u: goto label_2bf2c4;
        case 0x2bf2d4u: goto label_2bf2d4;
        case 0x2bf334u: goto label_2bf334;
        case 0x2bf388u: goto label_2bf388;
        case 0x2bf394u: goto label_2bf394;
        default: break;
    }

    ctx->pc = 0x2befc8u;

    // 0x2befc8: 0xa18c0  sll         $v1, $t2, 3
    ctx->pc = 0x2befc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x2befcc: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x2befccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2befd0: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2befd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2befd4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2befd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2befd8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2befd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2befdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2befdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2befe0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2befe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2befe4: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x2befe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x2befe8: 0x6a1823  subu        $v1, $v1, $t2
    ctx->pc = 0x2befe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2befec: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2befecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2beff0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2beff0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beff4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2beff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2beff8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2beff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2beffc: 0x1338c0  sll         $a3, $s3, 3
    ctx->pc = 0x2beffcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2bf000: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2bf000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2bf004: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2bf004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf008: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2bf008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x2bf00c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2bf00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bf010: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2bf010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2bf014: 0x3c120017  lui         $s2, 0x17
    ctx->pc = 0x2bf014u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)23 << 16));
    // 0x2bf018: 0x26527b90  addiu       $s2, $s2, 0x7B90
    ctx->pc = 0x2bf018u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 31632));
    // 0x2bf01c: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x2bf01cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2bf020: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2bf020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2bf024: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x2bf024u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf028: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x2bf028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x2bf02c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2bf02cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf030: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2bf030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2bf034: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x2bf034u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bf038: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x2bf038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x2bf03c: 0xf33823  subu        $a3, $a3, $s3
    ctx->pc = 0x2bf03cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x2bf040: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2bf040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2bf044: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2bf044u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf048: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x2bf048u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2bf04c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2bf04cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2bf050: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x2bf050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x2bf054: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2bf054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2bf058: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2bf058u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2bf05c: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x2bf05cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2bf060: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2bf060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2bf064: 0x2478821  addu        $s1, $s2, $a3
    ctx->pc = 0x2bf064u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x2bf068: 0x7bc30000  lq          $v1, 0x0($fp)
    ctx->pc = 0x2bf068u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2bf06c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bf06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bf070: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2bf070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2bf074: 0x26260050  addiu       $a2, $s1, 0x50
    ctx->pc = 0x2bf074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x2bf078: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2bf078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf07c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2bf07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf080: 0x7ec30000  sq          $v1, 0x0($s6)
    ctx->pc = 0x2bf080u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 3));
    // 0x2bf084: 0xc08477c  jal         func_211DF0
    ctx->pc = 0x2BF084u;
    SET_GPR_U32(ctx, 31, 0x2BF08Cu);
    ctx->pc = 0x2BF088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF084u;
    // 0x2bf088: 0x245703d0  addiu       $s7, $v0, 0x3D0 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DF0u, 0x2BF084u, 0x2BF08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF08Cu;
label_2bf08c:
    // 0x2bf08c: 0x7ac20000  lq          $v0, 0x0($s6)
    ctx->pc = 0x2bf08cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2bf090: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2bf090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf094: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2bf094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf098: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2bf098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf09c: 0xc084774  jal         func_211DD0
    ctx->pc = 0x2BF09Cu;
    SET_GPR_U32(ctx, 31, 0x2BF0A4u);
    ctx->pc = 0x2BF0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF09Cu;
    // 0x2bf0a0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x2BF09Cu, 0x2BF0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF0A4u;
label_2bf0a4:
    // 0x2bf0a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bf0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf0a8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2bf0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bf0ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2bf0acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf0b0: 0xc084774  jal         func_211DD0
    ctx->pc = 0x2BF0B0u;
    SET_GPR_U32(ctx, 31, 0x2BF0B8u);
    ctx->pc = 0x2BF0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF0B0u;
    // 0x2bf0b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x2BF0B0u, 0x2BF0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF0B8u;
label_2bf0b8:
    // 0x2bf0b8: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF0B8u;
    {
        const bool branch_taken_0x2bf0b8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF0B8u;
        // 0x2bf0bc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf0b8) {
            ctx->pc = 0x2BF0CCu;
            goto label_2bf0cc;
        }
    }
    ctx->pc = 0x2BF0C0u;
    // 0x2bf0c0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2bf0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf0c4: 0xc084774  jal         func_211DD0
    ctx->pc = 0x2BF0C4u;
    SET_GPR_U32(ctx, 31, 0x2BF0CCu);
    ctx->pc = 0x2BF0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF0C4u;
    // 0x2bf0c8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x2BF0C4u, 0x2BF0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF0CCu;
label_2bf0cc:
    // 0x2bf0cc: 0x1680000b  bnez        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x2BF0CCu;
    {
        const bool branch_taken_0x2bf0cc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF0CCu;
        // 0x2bf0d0: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf0cc) {
            ctx->pc = 0x2BF0FCu;
            goto label_2bf0fc;
        }
    }
    ctx->pc = 0x2BF0D4u;
    // 0x2bf0d4: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x2bf0d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2bf0d8: 0xc78c9274  lwc1        $f12, -0x6D8C($gp)
    ctx->pc = 0x2bf0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bf0dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bf0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf0e0: 0xc0847a4  jal         func_211E90
    ctx->pc = 0x2BF0E0u;
    SET_GPR_U32(ctx, 31, 0x2BF0E8u);
    ctx->pc = 0x2BF0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF0E0u;
    // 0x2bf0e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E90u, 0x2BF0E0u, 0x2BF0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF0E8u;
label_2bf0e8:
    // 0x2bf0e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bf0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf0ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bf0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf0f0: 0xc084774  jal         func_211DD0
    ctx->pc = 0x2BF0F0u;
    SET_GPR_U32(ctx, 31, 0x2BF0F8u);
    ctx->pc = 0x2BF0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF0F0u;
    // 0x2bf0f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x2BF0F0u, 0x2BF0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF0F8u;
label_2bf0f8:
    // 0x2bf0f8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2bf0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2bf0fc:
    // 0x2bf0fc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2bf0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf100: 0xc08b82c  jal         func_22E0B0
    ctx->pc = 0x2BF100u;
    SET_GPR_U32(ctx, 31, 0x2BF108u);
    ctx->pc = 0x2BF104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF100u;
    // 0x2bf104: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E0B0u, 0x2BF100u, 0x2BF108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF108u;
label_2bf108:
    // 0x2bf108: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2bf108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf10c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2bf10cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bf110: 0xe6e00004  swc1        $f0, 0x4($s7)
    ctx->pc = 0x2bf110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2bf114: 0x26260040  addiu       $a2, $s1, 0x40
    ctx->pc = 0x2bf114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2bf118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bf118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf11c: 0xc084784  jal         func_211E10
    ctx->pc = 0x2BF11Cu;
    SET_GPR_U32(ctx, 31, 0x2BF124u);
    ctx->pc = 0x2BF120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF11Cu;
    // 0x2bf120: 0x46150500  add.s       $f20, $f0, $f21 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x2BF11Cu, 0x2BF124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF124u;
label_2bf124:
    // 0x2bf124: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2bf124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf128: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x2bf128u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x2bf12c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2bf12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf130: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x2bf130u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x2bf134: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2bf134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2bf138: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bf138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf13c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bf13cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf140: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x2BF140u;
    {
        const bool branch_taken_0x2bf140 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BF144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF140u;
        // 0x2bf144: 0xc7a10010  lwc1        $f1, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf140) {
            ctx->pc = 0x2BF188u;
            goto label_2bf188;
        }
    }
    ctx->pc = 0x2BF148u;
    // 0x2bf148: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x2bf148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bf14c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2bf14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2bf150: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bf150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bf154: 0x4602a001  sub.s       $f0, $f20, $f2
    ctx->pc = 0x2bf154u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x2bf158: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2bf158u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2bf15c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bf15cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf160: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2BF160u;
    {
        const bool branch_taken_0x2bf160 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BF164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF160u;
        // 0x2bf164: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf160) {
            ctx->pc = 0x2BF180u;
            goto label_2bf180;
        }
    }
    ctx->pc = 0x2BF168u;
    // 0x2bf168: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2bf168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf16c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2bf16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf170: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x2bf170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x2bf174: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BF174u;
    {
        const bool branch_taken_0x2bf174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF174u;
        // 0x2bf178: 0xe6210048  swc1        $f1, 0x48($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf174) {
            ctx->pc = 0x2BF198u;
            goto label_2bf198;
        }
    }
    ctx->pc = 0x2BF17Cu;
    // 0x2bf17c: 0x0  nop
    ctx->pc = 0x2bf17cu;
    // NOP
label_2bf180:
    // 0x2bf180: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BF180u;
    {
        const bool branch_taken_0x2bf180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF180u;
        // 0x2bf184: 0x46001506  mov.s       $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf180) {
            ctx->pc = 0x2BF19Cu;
            goto label_2bf19c;
        }
    }
    ctx->pc = 0x2BF188u;
label_2bf188:
    // 0x2bf188: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2bf188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf18c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2bf18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf190: 0xe6210040  swc1        $f1, 0x40($s1)
    ctx->pc = 0x2bf190u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x2bf194: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x2bf194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
label_2bf198:
    // 0x2bf198: 0xe6340044  swc1        $f20, 0x44($s1)
    ctx->pc = 0x2bf198u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
label_2bf19c:
    // 0x2bf19c: 0x3c0141e0  lui         $at, 0x41E0
    ctx->pc = 0x2bf19cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16864 << 16));
    // 0x2bf1a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bf1a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf1a4: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x2bf1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bf1a8: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2bf1a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2bf1ac: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2bf1acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf1b0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BF1B0u;
    {
        const bool branch_taken_0x2bf1b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BF1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF1B0u;
        // 0x2bf1b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf1b0) {
            ctx->pc = 0x2BF1C8u;
            goto label_2bf1c8;
        }
    }
    ctx->pc = 0x2BF1B8u;
    // 0x2bf1b8: 0x8e4303b0  lw          $v1, 0x3B0($s2)
    ctx->pc = 0x2bf1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
    // 0x2bf1bc: 0x2621004  sllv        $v0, $v0, $s3
    ctx->pc = 0x2bf1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x2bf1c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bf1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bf1c4: 0xae4303b0  sw          $v1, 0x3B0($s2)
    ctx->pc = 0x2bf1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 944), GPR_U32(ctx, 3));
label_2bf1c8:
    // 0x2bf1c8: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x2bf1c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf1cc: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x2BF1CCu;
    {
        const bool branch_taken_0x2bf1cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BF1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF1CCu;
        // 0x2bf1d0: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf1cc) {
            ctx->pc = 0x2BF21Cu;
            goto label_2bf21c;
        }
    }
    ctx->pc = 0x2BF1D4u;
    // 0x2bf1d4: 0x4602a041  sub.s       $f1, $f20, $f2
    ctx->pc = 0x2bf1d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x2bf1d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bf1d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bf1dc: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF1DCu;
    {
        const bool branch_taken_0x2bf1dc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF1DCu;
        // 0x2bf1e0: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf1dc) {
            ctx->pc = 0x2BF1F0u;
            goto label_2bf1f0;
        }
    }
    ctx->pc = 0x2BF1E4u;
    // 0x2bf1e4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2bf1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf1e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bf1e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bf1ec: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2bf1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2bf1f0:
    // 0x2bf1f0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2bf1f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2bf1f4: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x2bf1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x2bf1f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bf1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf1fc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2bf1fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf200: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2bf200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf204: 0xc084784  jal         func_211E10
    ctx->pc = 0x2BF204u;
    SET_GPR_U32(ctx, 31, 0x2BF20Cu);
    ctx->pc = 0x2BF208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF204u;
    // 0x2bf208: 0xe7a20024  swc1        $f2, 0x24($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x2BF204u, 0x2BF20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF20Cu;
label_2bf20c:
    // 0x2bf20c: 0xc78c9278  lwc1        $f12, -0x6D88($gp)
    ctx->pc = 0x2bf20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bf210: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bf210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf214: 0xc0847a4  jal         func_211E90
    ctx->pc = 0x2BF214u;
    SET_GPR_U32(ctx, 31, 0x2BF21Cu);
    ctx->pc = 0x2BF218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF214u;
    // 0x2bf218: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E90u, 0x2BF214u, 0x2BF21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF21Cu;
label_2bf21c:
    // 0x2bf21c: 0x12a0002d  beqz        $s5, . + 4 + (0x2D << 2)
    ctx->pc = 0x2BF21Cu;
    {
        const bool branch_taken_0x2bf21c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF21Cu;
        // 0x2bf220: 0xc780cb00  lwc1        $f0, -0x3500($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294953728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf21c) {
            ctx->pc = 0x2BF2D4u;
            goto label_2bf2d4;
        }
    }
    ctx->pc = 0x2BF224u;
    // 0x2bf224: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2BF224u;
    {
        const bool branch_taken_0x2bf224 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF224u;
        // 0x2bf228: 0x46150500  add.s       $f20, $f0, $f21 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf224) {
            ctx->pc = 0x2BF258u;
            goto label_2bf258;
        }
    }
    ctx->pc = 0x2BF22Cu;
    // 0x2bf22c: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x2bf22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf230: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2bf230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2bf234: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bf234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bf238: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2bf238u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2bf23c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2bf23cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2bf240: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bf240u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf244: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2BF244u;
    {
        const bool branch_taken_0x2bf244 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bf244) {
            ctx->pc = 0x2BF248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF244u;
            // 0x2bf248: 0xe634004c  swc1        $f20, 0x4C($s1) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF25Cu;
            goto label_2bf25c;
        }
    }
    ctx->pc = 0x2BF24Cu;
    // 0x2bf24c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BF24Cu;
    {
        const bool branch_taken_0x2bf24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF24Cu;
        // 0x2bf250: 0xc634004c  lwc1        $f20, 0x4C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf24c) {
            ctx->pc = 0x2BF25Cu;
            goto label_2bf25c;
        }
    }
    ctx->pc = 0x2BF254u;
    // 0x2bf254: 0x0  nop
    ctx->pc = 0x2bf254u;
    // NOP
label_2bf258:
    // 0x2bf258: 0xe634004c  swc1        $f20, 0x4C($s1)
    ctx->pc = 0x2bf258u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
label_2bf25c:
    // 0x2bf25c: 0x3c0141e0  lui         $at, 0x41E0
    ctx->pc = 0x2bf25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16864 << 16));
    // 0x2bf260: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bf260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf264: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2bf264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf268: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2bf268u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2bf26c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bf26cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf270: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BF270u;
    {
        const bool branch_taken_0x2bf270 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BF274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF270u;
        // 0x2bf274: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf270) {
            ctx->pc = 0x2BF288u;
            goto label_2bf288;
        }
    }
    ctx->pc = 0x2BF278u;
    // 0x2bf278: 0x8e4303b0  lw          $v1, 0x3B0($s2)
    ctx->pc = 0x2bf278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
    // 0x2bf27c: 0x2621004  sllv        $v0, $v0, $s3
    ctx->pc = 0x2bf27cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x2bf280: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bf280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bf284: 0xae4303b0  sw          $v1, 0x3B0($s2)
    ctx->pc = 0x2bf284u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 944), GPR_U32(ctx, 3));
label_2bf288:
    // 0x2bf288: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x2bf288u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf28c: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x2BF28Cu;
    {
        const bool branch_taken_0x2bf28c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bf28c) {
            ctx->pc = 0x2BF290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF28Cu;
            // 0x2bf290: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF2D8u;
            goto label_2bf2d8;
        }
    }
    ctx->pc = 0x2BF294u;
    // 0x2bf294: 0x4601a001  sub.s       $f0, $f20, $f1
    ctx->pc = 0x2bf294u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x2bf298: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2bf298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf29c: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x2bf29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bf2a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bf2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf2a4: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x2bf2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x2bf2a8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2bf2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf2ac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2bf2acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf2b0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2bf2b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2bf2b4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2bf2b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bf2b8: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x2bf2b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2bf2bc: 0xc084784  jal         func_211E10
    ctx->pc = 0x2BF2BCu;
    SET_GPR_U32(ctx, 31, 0x2BF2C4u);
    ctx->pc = 0x2BF2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF2BCu;
    // 0x2bf2c0: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x2BF2BCu, 0x2BF2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF2C4u;
label_2bf2c4:
    // 0x2bf2c4: 0xc78c927c  lwc1        $f12, -0x6D84($gp)
    ctx->pc = 0x2bf2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bf2c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bf2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf2cc: 0xc0847a4  jal         func_211E90
    ctx->pc = 0x2BF2CCu;
    SET_GPR_U32(ctx, 31, 0x2BF2D4u);
    ctx->pc = 0x2BF2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF2CCu;
    // 0x2bf2d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E90u, 0x2BF2CCu, 0x2BF2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF2D4u;
label_2bf2d4:
    // 0x2bf2d4: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x2bf2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2bf2d8:
    // 0x2bf2d8: 0x3c030f00  lui         $v1, 0xF00
    ctx->pc = 0x2bf2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3840 << 16));
    // 0x2bf2dc: 0x3c040900  lui         $a0, 0x900
    ctx->pc = 0x2bf2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2304 << 16));
    // 0x2bf2e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2bf2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2bf2e4: 0x54440025  bnel        $v0, $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2BF2E4u;
    {
        const bool branch_taken_0x2bf2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2bf2e4) {
            ctx->pc = 0x2BF2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF2E4u;
            // 0x2bf2e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF37Cu;
            goto label_2bf37c;
        }
    }
    ctx->pc = 0x2BF2ECu;
    // 0x2bf2ec: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2BF2ECu;
    {
        const bool branch_taken_0x2bf2ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF2ECu;
        // 0x2bf2f0: 0xc7c20004  lwc1        $f2, 0x4($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf2ec) {
            ctx->pc = 0x2BF320u;
            goto label_2bf320;
        }
    }
    ctx->pc = 0x2BF2F4u;
    // 0x2bf2f4: 0xc6200060  lwc1        $f0, 0x60($s1)
    ctx->pc = 0x2bf2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf2f8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2bf2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2bf2fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bf2fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bf300: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2bf300u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2bf304: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2bf304u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2bf308: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bf308u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf30c: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x2BF30Cu;
    {
        const bool branch_taken_0x2bf30c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bf30c) {
            ctx->pc = 0x2BF310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF30Cu;
            // 0x2bf310: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF360u;
            goto label_2bf360;
        }
    }
    ctx->pc = 0x2BF314u;
    // 0x2bf314: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BF314u;
    {
        const bool branch_taken_0x2bf314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF314u;
        // 0x2bf318: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf314) {
            ctx->pc = 0x2BF324u;
            goto label_2bf324;
        }
    }
    ctx->pc = 0x2BF31Cu;
    // 0x2bf31c: 0x0  nop
    ctx->pc = 0x2bf31cu;
    // NOP
label_2bf320:
    // 0x2bf320: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2bf320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2bf324:
    // 0x2bf324: 0xe6220060  swc1        $f2, 0x60($s1)
    ctx->pc = 0x2bf324u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x2bf328: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bf328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf32c: 0xc08b672  jal         func_22D9C8
    ctx->pc = 0x2BF32Cu;
    SET_GPR_U32(ctx, 31, 0x2BF334u);
    ctx->pc = 0x2BF330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF32Cu;
    // 0x2bf330: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D9C8u, 0x2BF32Cu, 0x2BF334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF334u;
label_2bf334:
    // 0x2bf334: 0x46150080  add.s       $f2, $f0, $f21
    ctx->pc = 0x2bf334u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2bf338: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2bf338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf33c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2bf33cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf340: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2BF340u;
    {
        const bool branch_taken_0x2bf340 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BF344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF340u;
        // 0x2bf344: 0xe6e00008  swc1        $f0, 0x8($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf340) {
            ctx->pc = 0x2BF378u;
            goto label_2bf378;
        }
    }
    ctx->pc = 0x2BF348u;
    // 0x2bf348: 0x8e4303c0  lw          $v1, 0x3C0($s2)
    ctx->pc = 0x2bf348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 960)));
    // 0x2bf34c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bf34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf350: 0x2621004  sllv        $v0, $v0, $s3
    ctx->pc = 0x2bf350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x2bf354: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BF354u;
    {
        const bool branch_taken_0x2bf354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF354u;
        // 0x2bf358: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf354) {
            ctx->pc = 0x2BF374u;
            goto label_2bf374;
        }
    }
    ctx->pc = 0x2BF35Cu;
    // 0x2bf35c: 0x0  nop
    ctx->pc = 0x2bf35cu;
    // NOP
label_2bf360:
    // 0x2bf360: 0x8e4403c4  lw          $a0, 0x3C4($s2)
    ctx->pc = 0x2bf360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 964)));
    // 0x2bf364: 0x8e4303c0  lw          $v1, 0x3C0($s2)
    ctx->pc = 0x2bf364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 960)));
    // 0x2bf368: 0x2621004  sllv        $v0, $v0, $s3
    ctx->pc = 0x2bf368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x2bf36c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2bf36cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2bf370: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2bf370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2bf374:
    // 0x2bf374: 0xae4303c0  sw          $v1, 0x3C0($s2)
    ctx->pc = 0x2bf374u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 960), GPR_U32(ctx, 3));
label_2bf378:
    // 0x2bf378: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bf378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bf37c:
    // 0x2bf37c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2bf37cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf380: 0xc084784  jal         func_211E10
    ctx->pc = 0x2BF380u;
    SET_GPR_U32(ctx, 31, 0x2BF388u);
    ctx->pc = 0x2BF384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF380u;
    // 0x2bf384: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x2BF380u, 0x2BF388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF388u;
label_2bf388:
    // 0x2bf388: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bf388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf38c: 0xc084814  jal         func_212050
    ctx->pc = 0x2BF38Cu;
    SET_GPR_U32(ctx, 31, 0x2BF394u);
    ctx->pc = 0x2BF390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF38Cu;
    // 0x2bf390: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x2BF38Cu, 0x2BF394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF394u;
label_2bf394:
    // 0x2bf394: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bf394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bf398: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bf398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bf39c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bf39cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf3a0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF3A0u;
    {
        const bool branch_taken_0x2bf3a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BF3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF3A0u;
        // 0x2bf3a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf3a0) {
            ctx->pc = 0x2BF3B4u;
            goto label_2bf3b4;
        }
    }
    ctx->pc = 0x2BF3A8u;
    // 0x2bf3a8: 0x7ac30000  lq          $v1, 0x0($s6)
    ctx->pc = 0x2bf3a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2bf3ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bf3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf3b0: 0x7fc30000  sq          $v1, 0x0($fp)
    ctx->pc = 0x2bf3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 3));
label_2bf3b4:
    // 0x2bf3b4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2bf3b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bf3b8: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x2bf3b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2bf3bc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2bf3bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bf3c0: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x2bf3c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2bf3c4: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2bf3c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bf3c8: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x2bf3c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2bf3cc: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2bf3ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bf3d0: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x2bf3d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2bf3d4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2bf3d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bf3d8: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x2bf3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2bf3dc: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x2bf3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bf3e0: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2bf3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bf3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF3E4u;
        // 0x2bf3e8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF3E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF3ECu;
    // 0x2bf3ec: 0x0  nop
    ctx->pc = 0x2bf3ecu;
    // NOP
    ctx->pc = 0x2bf3f0u;
}
