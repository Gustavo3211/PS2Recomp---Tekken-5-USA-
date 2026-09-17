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

// Function: sub_004FA048
// Address: 0x4fa048 - 0x4fa618
void sub_004FA048_0x4fa048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FA048_0x4fa048");
#endif

    switch (ctx->pc) {
        case 0x4fa0c0u: goto label_4fa0c0;
        case 0x4fa174u: goto label_4fa174;
        case 0x4fa17cu: goto label_4fa17c;
        case 0x4fa194u: goto label_4fa194;
        case 0x4fa1a4u: goto label_4fa1a4;
        case 0x4fa1d4u: goto label_4fa1d4;
        case 0x4fa20cu: goto label_4fa20c;
        case 0x4fa21cu: goto label_4fa21c;
        case 0x4fa24cu: goto label_4fa24c;
        case 0x4fa264u: goto label_4fa264;
        case 0x4fa274u: goto label_4fa274;
        case 0x4fa28cu: goto label_4fa28c;
        case 0x4fa2a8u: goto label_4fa2a8;
        case 0x4fa2c0u: goto label_4fa2c0;
        case 0x4fa2e8u: goto label_4fa2e8;
        case 0x4fa308u: goto label_4fa308;
        case 0x4fa318u: goto label_4fa318;
        case 0x4fa330u: goto label_4fa330;
        case 0x4fa34cu: goto label_4fa34c;
        case 0x4fa364u: goto label_4fa364;
        case 0x4fa38cu: goto label_4fa38c;
        case 0x4fa3b4u: goto label_4fa3b4;
        case 0x4fa3bcu: goto label_4fa3bc;
        case 0x4fa3c4u: goto label_4fa3c4;
        case 0x4fa3d8u: goto label_4fa3d8;
        case 0x4fa3e0u: goto label_4fa3e0;
        case 0x4fa3f0u: goto label_4fa3f0;
        case 0x4fa400u: goto label_4fa400;
        case 0x4fa430u: goto label_4fa430;
        case 0x4fa464u: goto label_4fa464;
        case 0x4fa478u: goto label_4fa478;
        case 0x4fa490u: goto label_4fa490;
        case 0x4fa4c0u: goto label_4fa4c0;
        case 0x4fa4c8u: goto label_4fa4c8;
        case 0x4fa4d4u: goto label_4fa4d4;
        case 0x4fa4e8u: goto label_4fa4e8;
        case 0x4fa500u: goto label_4fa500;
        case 0x4fa528u: goto label_4fa528;
        case 0x4fa54cu: goto label_4fa54c;
        case 0x4fa584u: goto label_4fa584;
        case 0x4fa58cu: goto label_4fa58c;
        case 0x4fa59cu: goto label_4fa59c;
        case 0x4fa5c8u: goto label_4fa5c8;
        case 0x4fa5d8u: goto label_4fa5d8;
        case 0x4fa5e0u: goto label_4fa5e0;
        case 0x4fa5e8u: goto label_4fa5e8;
        default: break;
    }

    ctx->pc = 0x4fa048u;

    // 0x4fa048: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4fa048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4fa04c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4fa04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4fa050: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x4fa050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x4fa054: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4fa054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa058: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x4fa058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x4fa05c: 0x3c120057  lui         $s2, 0x57
    ctx->pc = 0x4fa05cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)87 << 16));
    // 0x4fa060: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x4fa060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x4fa064: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4fa064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4fa068: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x4fa068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x4fa06c: 0x2442bc00  addiu       $v0, $v0, -0x4400
    ctx->pc = 0x4fa06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949888));
    // 0x4fa070: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x4fa070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x4fa074: 0x2463bc10  addiu       $v1, $v1, -0x43F0
    ctx->pc = 0x4fa074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949904));
    // 0x4fa078: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x4fa078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x4fa07c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x4fa07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x4fa080: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x4fa080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x4fa084: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x4fa084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x4fa088: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x4fa088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x4fa08c: 0x8e45ce90  lw          $a1, -0x3170($s2)
    ctx->pc = 0x4fa08cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x56CE90u));
    // 0x4fa090: 0xdc470008  ld          $a3, 0x8($v0)
    ctx->pc = 0x4fa090u;
    SET_GPR_U64(ctx, 7, FAST_READ64(0x72BC08u));
    // 0x4fa094: 0xdc680008  ld          $t0, 0x8($v1)
    ctx->pc = 0x4fa094u;
    SET_GPR_U64(ctx, 8, FAST_READ64(0x72BC18u));
    // 0x4fa098: 0x28a50281  slti        $a1, $a1, 0x281
    ctx->pc = 0x4fa098u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)641) ? 1 : 0);
    // 0x4fa09c: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x4fa09cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4fa0a0: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x4fa0a0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fa0a4: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x4fa0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x4fa0a8: 0xffa70008  sd          $a3, 0x8($sp)
    ctx->pc = 0x4fa0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 7));
    // 0x4fa0ac: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x4fa0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x4fa0b0: 0x10a0014d  beqz        $a1, . + 4 + (0x14D << 2)
    ctx->pc = 0x4FA0B0u;
    {
        const bool branch_taken_0x4fa0b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FA0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FA0B0u;
        // 0x4fa0b4: 0xffa80018  sd          $t0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa0b0) {
            ctx->pc = 0x4FA5E8u;
            goto label_4fa5e8;
        }
    }
    ctx->pc = 0x4FA0B8u;
    // 0x4fa0b8: 0xc13ea90  jal         func_4FAA40
    ctx->pc = 0x4FA0B8u;
    SET_GPR_U32(ctx, 31, 0x4FA0C0u);
    ctx->pc = 0x4FAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FAA40u, 0x4FA0B8u, 0x4FA0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA0C0u;
label_4fa0c0:
    // 0x4fa0c0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4fa0c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa0c4: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4fa0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4fa0c8: 0x8c55ce8c  lw          $s5, -0x3174($v0)
    ctx->pc = 0x4fa0c8u;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x56CE8Cu));
    // 0x4fa0cc: 0x56a00002  bnel        $s5, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4FA0CCu;
    {
        const bool branch_taken_0x4fa0cc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x4fa0cc) {
            ctx->pc = 0x4FA0D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4FA0CCu;
            // 0x4fa0d0: 0xdd020060  ld          $v0, 0x60($t0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FA0D8u;
            goto label_4fa0d8;
        }
    }
    ctx->pc = 0x4FA0D4u;
    // 0x4fa0d4: 0xdd020150  ld          $v0, 0x150($t0)
    ctx->pc = 0x4fa0d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 336)));
label_4fa0d8:
    // 0x4fa0d8: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4fa0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x4fa0dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4fa0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4fa0e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4fa0e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4fa0e4: 0x28140  sll         $s0, $v0, 5
    ctx->pc = 0x4fa0e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x4fa0e8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4fa0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4fa0ec: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x4fa0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x4fa0f0: 0x8c43ce88  lw          $v1, -0x3178($v0)
    ctx->pc = 0x4fa0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x56CE88u));
    // 0x4fa0f4: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x4fa0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x4fa0f8: 0x8c86ce94  lw          $a2, -0x316C($a0)
    ctx->pc = 0x4fa0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x56CE94u));
    // 0x4fa0fc: 0x2656ce90  addiu       $s6, $s2, -0x3170
    ctx->pc = 0x4fa0fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954640));
    // 0x4fa100: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4fa100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4fa104: 0x8ca7ced0  lw          $a3, -0x3130($a1)
    ctx->pc = 0x4fa104u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x56CED0u));
    // 0x4fa108: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4fa108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4fa10c: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x4fa10cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4fa110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fa110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4fa114: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4fa114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4fa118: 0xc73818  mult        $a3, $a2, $a3
    ctx->pc = 0x4fa118u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4fa11c: 0x63280  sll         $a2, $a2, 10
    ctx->pc = 0x4fa11cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 10));
    // 0x4fa120: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4fa120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4fa124: 0x2463bc20  addiu       $v1, $v1, -0x43E0
    ctx->pc = 0x4fa124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949920));
    // 0x4fa128: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x4fa128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4fa12c: 0xdc680008  ld          $t0, 0x8($v1)
    ctx->pc = 0x4fa12cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4fa130: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x4fa130u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x4fa134: 0x8c490010  lw          $t1, 0x10($v0)
    ctx->pc = 0x4fa134u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4fa138: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x4fa138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x4fa13c: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x4fa13cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fa140: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x4fa140u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x4fa144: 0x24130800  addiu       $s3, $zero, 0x800
    ctx->pc = 0x4fa144u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x4fa148: 0x73a83  sra         $a3, $a3, 10
    ctx->pc = 0x4fa148u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 10));
    // 0x4fa14c: 0x32230002  andi        $v1, $s1, 0x2
    ctx->pc = 0x4fa14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x4fa150: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x4fa150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x4fa154: 0x313701ff  andi        $s7, $t1, 0x1FF
    ctx->pc = 0x4fa154u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)511);
    // 0x4fa158: 0xffa80028  sd          $t0, 0x28($sp)
    ctx->pc = 0x4fa158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 8));
    // 0x4fa15c: 0x265f023  subu        $fp, $s3, $a1
    ctx->pc = 0x4fa15cu;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x4fa160: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x4fa160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x4fa164: 0x1060009a  beqz        $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x4FA164u;
    {
        const bool branch_taken_0x4fa164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FA168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FA164u;
        // 0x4fa168: 0x692c3  sra         $s2, $a2, 11 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa164) {
            ctx->pc = 0x4FA3D0u;
            goto label_4fa3d0;
        }
    }
    ctx->pc = 0x4FA16Cu;
    // 0x4fa16c: 0xc13ea1e  jal         func_4FA878
    ctx->pc = 0x4FA16Cu;
    SET_GPR_U32(ctx, 31, 0x4FA174u);
    ctx->pc = 0x4FA878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FA878u, 0x4FA16Cu, 0x4FA174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA174u;
label_4fa174:
    // 0x4fa174: 0xc13ea86  jal         func_4FAA18
    ctx->pc = 0x4FA174u;
    SET_GPR_U32(ctx, 31, 0x4FA17Cu);
    ctx->pc = 0x4FAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FAA18u, 0x4FA174u, 0x4FA17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA17Cu;
label_4fa17c:
    // 0x4fa17c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4fa17cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa180: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x4fa180u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4fa184: 0x3412fffe  ori         $s2, $zero, 0xFFFE
    ctx->pc = 0x4fa184u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x4fa188: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x4fa188u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x4fa18c: 0xc042d60  jal         func_10B580
    ctx->pc = 0x4FA18Cu;
    SET_GPR_U32(ctx, 31, 0x4FA194u);
    ctx->pc = 0x4FA190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA18Cu;
    // 0x4fa190: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B580u, 0x4FA18Cu, 0x4FA194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA194u;
label_4fa194:
    // 0x4fa194: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fa194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa198: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x4fa198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x4fa19c: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FA19Cu;
    SET_GPR_U32(ctx, 31, 0x4FA1A4u);
    ctx->pc = 0x4FA1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA19Cu;
    // 0x4fa1a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FA19Cu, 0x4FA1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA1A4u;
label_4fa1a4:
    // 0x4fa1a4: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x4fa1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4fa1a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fa1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa1ac: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x4fa1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x4fa1b0: 0x24c3003f  addiu       $v1, $a2, 0x3F
    ctx->pc = 0x4fa1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x4fa1b4: 0x28c20000  slti        $v0, $a2, 0x0
    ctx->pc = 0x4fa1b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fa1b8: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x4fa1b8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x4fa1bc: 0x34118700  ori         $s1, $zero, 0x8700
    ctx->pc = 0x4fa1bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x4fa1c0: 0x118c38  dsll        $s1, $s1, 16
    ctx->pc = 0x4fa1c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 16);
    // 0x4fa1c4: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x4fa1c4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x4fa1c8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x4fa1c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x4fa1cc: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FA1CCu;
    SET_GPR_U32(ctx, 31, 0x4FA1D4u);
    ctx->pc = 0x4FA1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA1CCu;
    // 0x4fa1d0: 0x2e63025  or          $a2, $s7, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FA1CCu, 0x4FA1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA1D4u;
label_4fa1d4:
    // 0x4fa1d4: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x4fa1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4fa1d8: 0x3407e680  ori         $a3, $zero, 0xE680
    ctx->pc = 0x4fa1d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59008);
    // 0x4fa1dc: 0x73d38  dsll        $a3, $a3, 20
    ctx->pc = 0x4fa1dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 20);
    // 0x4fa1e0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4fa1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4fa1e4: 0x24c3003f  addiu       $v1, $a2, 0x3F
    ctx->pc = 0x4fa1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x4fa1e8: 0x28c20000  slti        $v0, $a2, 0x0
    ctx->pc = 0x4fa1e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fa1ec: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x4fa1ecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x4fa1f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fa1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa1f4: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x4fa1f4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x4fa1f8: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x4fa1f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x4fa1fc: 0x2063025  or          $a2, $s0, $a2
    ctx->pc = 0x4fa1fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    // 0x4fa200: 0x3c107900  lui         $s0, 0x7900
    ctx->pc = 0x4fa200u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)30976 << 16));
    // 0x4fa204: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FA204u;
    SET_GPR_U32(ctx, 31, 0x4FA20Cu);
    ctx->pc = 0x4FA208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA204u;
    // 0x4fa208: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FA204u, 0x4FA20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA20Cu;
label_4fa20c:
    // 0x4fa20c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fa20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa210: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x4fa210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x4fa214: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FA214u;
    SET_GPR_U32(ctx, 31, 0x4FA21Cu);
    ctx->pc = 0x4FA218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA214u;
    // 0x4fa218: 0x24060803  addiu       $a2, $zero, 0x803 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FA214u, 0x4FA21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA21Cu;
label_4fa21c:
    // 0x4fa21c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4fa21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4fa220: 0x3406f200  ori         $a2, $zero, 0xF200
    ctx->pc = 0x4fa220u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61952);
    // 0x4fa224: 0x637f8  dsll        $a2, $a2, 31
    ctx->pc = 0x4fa224u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 31);
    // 0x4fa228: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x4fa228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x4fa22c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x4fa22cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4fa230: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fa230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa234: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fa234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4fa238: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4fa238u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4fa23c: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x4fa23cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x4fa240: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4fa240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4fa244: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FA244u;
    SET_GPR_U32(ctx, 31, 0x4FA24Cu);
    ctx->pc = 0x4FA248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA244u;
    // 0x4fa248: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FA244u, 0x4FA24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA24Cu;
label_4fa24c:
    // 0x4fa24c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fa24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa250: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x4fa250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4fa254: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x4fa254u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x4fa258: 0x34c60064  ori         $a2, $a2, 0x64
    ctx->pc = 0x4fa258u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)100);
    // 0x4fa25c: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FA25Cu;
    SET_GPR_U32(ctx, 31, 0x4FA264u);
    ctx->pc = 0x4FA260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA25Cu;
    // 0x4fa260: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FA25Cu, 0x4FA264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA264u;
label_4fa264:
    // 0x4fa264: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fa264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa268: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fa268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa26c: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FA26Cu;
    SET_GPR_U32(ctx, 31, 0x4FA274u);
    ctx->pc = 0x4FA270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA26Cu;
    // 0x4fa270: 0x24060116  addiu       $a2, $zero, 0x116 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FA26Cu, 0x4FA274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA274u;
label_4fa274:
    // 0x4fa274: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fa274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa278: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x4fa278u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x4fa27c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x4fa27cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x4fa280: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x4fa280u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x4fa284: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FA284u;
    SET_GPR_U32(ctx, 31, 0x4FA28Cu);
    ctx->pc = 0x4FA288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA284u;
    // 0x4fa288: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FA284u, 0x4FA28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA28Cu;
label_4fa28c:
    // 0x4fa28c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4fa28cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4fa290: 0xd53023  subu        $a2, $a2, $s5
    ctx->pc = 0x4fa290u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x4fa294: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fa294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa298: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x4fa298u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x4fa29c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4fa29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4fa2a0: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FA2A0u;
    SET_GPR_U32(ctx, 31, 0x4FA2A8u);
    ctx->pc = 0x4FA2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA2A0u;
    // 0x4fa2a4: 0x63438  dsll        $a2, $a2, 16 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FA2A0u, 0x4FA2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA2A8u;
label_4fa2a8:
    // 0x4fa2a8: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x4fa2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x4fa2ac: 0x508025  or          $s0, $v0, $s0
    ctx->pc = 0x4fa2acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4fa2b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fa2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa2b4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4fa2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4fa2b8: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FA2B8u;
    SET_GPR_U32(ctx, 31, 0x4FA2C0u);
    ctx->pc = 0x4FA2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA2B8u;
    // 0x4fa2bc: 0x2123025  or          $a2, $s0, $s2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FA2B8u, 0x4FA2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA2C0u;
label_4fa2c0:
    // 0x4fa2c0: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4fa2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4fa2c4: 0x240601e1  addiu       $a2, $zero, 0x1E1
    ctx->pc = 0x4fa2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 481));
    // 0x4fa2c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fa2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa2cc: 0xd53023  subu        $a2, $a2, $s5
    ctx->pc = 0x4fa2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x4fa2d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4fa2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4fa2d4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x4fa2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x4fa2d8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4fa2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4fa2dc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x4fa2dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x4fa2e0: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FA2E0u;
    SET_GPR_U32(ctx, 31, 0x4FA2E8u);
    ctx->pc = 0x4FA2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA2E0u;
    // 0x4fa2e4: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FA2E0u, 0x4FA2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA2E8u;
label_4fa2e8:
    // 0x4fa2e8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4fa2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4fa2ec: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4fa2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4fa2f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fa2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa2f4: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x4fa2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x4fa2f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4fa2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4fa2fc: 0x513025  or          $a2, $v0, $s1
    ctx->pc = 0x4fa2fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4fa300: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FA300u;
    SET_GPR_U32(ctx, 31, 0x4FA308u);
    ctx->pc = 0x4FA304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA300u;
    // 0x4fa304: 0xd23025  or          $a2, $a2, $s2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FA300u, 0x4FA308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA308u;
label_4fa308:
    // 0x4fa308: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fa308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa30c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fa30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa310: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FA310u;
    SET_GPR_U32(ctx, 31, 0x4FA318u);
    ctx->pc = 0x4FA314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA310u;
    // 0x4fa314: 0x24060156  addiu       $a2, $zero, 0x156 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FA310u, 0x4FA318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA318u;
label_4fa318:
    // 0x4fa318: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fa318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa31c: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x4fa31cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x4fa320: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x4fa320u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x4fa324: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x4fa324u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x4fa328: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FA328u;
    SET_GPR_U32(ctx, 31, 0x4FA330u);
    ctx->pc = 0x4FA32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA328u;
    // 0x4fa32c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FA328u, 0x4FA330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA330u;
label_4fa330:
    // 0x4fa330: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4fa330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4fa334: 0xd53023  subu        $a2, $a2, $s5
    ctx->pc = 0x4fa334u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x4fa338: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fa338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa33c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x4fa33cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x4fa340: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4fa340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4fa344: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FA344u;
    SET_GPR_U32(ctx, 31, 0x4FA34Cu);
    ctx->pc = 0x4FA348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA344u;
    // 0x4fa348: 0x63438  dsll        $a2, $a2, 16 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FA344u, 0x4FA34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA34Cu;
label_4fa34c:
    // 0x4fa34c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fa34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa350: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x4fa350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4fa354: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4fa354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4fa358: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4fa358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4fa35c: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FA35Cu;
    SET_GPR_U32(ctx, 31, 0x4FA364u);
    ctx->pc = 0x4FA360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA35Cu;
    // 0x4fa360: 0x2023025  or          $a2, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FA35Cu, 0x4FA364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA364u;
label_4fa364:
    // 0x4fa364: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4fa364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4fa368: 0x240601e2  addiu       $a2, $zero, 0x1E2
    ctx->pc = 0x4fa368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 482));
    // 0x4fa36c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fa36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa370: 0xd53023  subu        $a2, $a2, $s5
    ctx->pc = 0x4fa370u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x4fa374: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4fa374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4fa378: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x4fa378u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x4fa37c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4fa37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4fa380: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x4fa380u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x4fa384: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FA384u;
    SET_GPR_U32(ctx, 31, 0x4FA38Cu);
    ctx->pc = 0x4FA388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA384u;
    // 0x4fa388: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FA384u, 0x4FA38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA38Cu;
label_4fa38c:
    // 0x4fa38c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4fa38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4fa390: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x4fa390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4fa394: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4fa394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4fa398: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4fa398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4fa39c: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x4fa39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x4fa3a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fa3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa3a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4fa3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4fa3a8: 0x518825  or          $s1, $v0, $s1
    ctx->pc = 0x4fa3a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4fa3ac: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FA3ACu;
    SET_GPR_U32(ctx, 31, 0x4FA3B4u);
    ctx->pc = 0x4FA3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA3ACu;
    // 0x4fa3b0: 0x2233025  or          $a2, $s1, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FA3ACu, 0x4FA3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA3B4u;
label_4fa3b4:
    // 0x4fa3b4: 0xc042d66  jal         func_10B598
    ctx->pc = 0x4FA3B4u;
    SET_GPR_U32(ctx, 31, 0x4FA3BCu);
    ctx->pc = 0x4FA3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA3B4u;
    // 0x4fa3b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B598u, 0x4FA3B4u, 0x4FA3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA3BCu;
label_4fa3bc:
    // 0x4fa3bc: 0xc13ea58  jal         func_4FA960
    ctx->pc = 0x4FA3BCu;
    SET_GPR_U32(ctx, 31, 0x4FA3C4u);
    ctx->pc = 0x4FA960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FA960u, 0x4FA3BCu, 0x4FA3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA3C4u;
label_4fa3c4:
    // 0x4fa3c4: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x4FA3C4u;
    {
        const bool branch_taken_0x4fa3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FA3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FA3C4u;
        // 0x4fa3c8: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa3c4) {
            ctx->pc = 0x4FA5ECu;
            goto label_4fa5ec;
        }
    }
    ctx->pc = 0x4FA3CCu;
    // 0x4fa3cc: 0x0  nop
    ctx->pc = 0x4fa3ccu;
    // NOP
label_4fa3d0:
    // 0x4fa3d0: 0xc13ea1e  jal         func_4FA878
    ctx->pc = 0x4FA3D0u;
    SET_GPR_U32(ctx, 31, 0x4FA3D8u);
    ctx->pc = 0x4FA3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA3D0u;
    // 0x4fa3d4: 0x32310001  andi        $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FA878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FA878u, 0x4FA3D0u, 0x4FA3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA3D8u;
label_4fa3d8:
    // 0x4fa3d8: 0xc13ea86  jal         func_4FAA18
    ctx->pc = 0x4FA3D8u;
    SET_GPR_U32(ctx, 31, 0x4FA3E0u);
    ctx->pc = 0x4FAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FAA18u, 0x4FA3D8u, 0x4FA3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA3E0u;
label_4fa3e0:
    // 0x4fa3e0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4fa3e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa3e4: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x4fa3e4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4fa3e8: 0xc042d60  jal         func_10B580
    ctx->pc = 0x4FA3E8u;
    SET_GPR_U32(ctx, 31, 0x4FA3F0u);
    ctx->pc = 0x4FA3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA3E8u;
    // 0x4fa3ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B580u, 0x4FA3E8u, 0x4FA3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA3F0u;
label_4fa3f0:
    // 0x4fa3f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fa3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa3f4: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x4fa3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x4fa3f8: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FA3F8u;
    SET_GPR_U32(ctx, 31, 0x4FA400u);
    ctx->pc = 0x4FA3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA3F8u;
    // 0x4fa3fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FA3F8u, 0x4FA400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA400u;
label_4fa400:
    // 0x4fa400: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x4fa400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4fa404: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fa404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa408: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x4fa408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x4fa40c: 0x24c3003f  addiu       $v1, $a2, 0x3F
    ctx->pc = 0x4fa40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x4fa410: 0x28c20000  slti        $v0, $a2, 0x0
    ctx->pc = 0x4fa410u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fa414: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x4fa414u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x4fa418: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x4fa418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x4fa41c: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x4fa41cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x4fa420: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x4fa420u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x4fa424: 0x2e63025  or          $a2, $s7, $a2
    ctx->pc = 0x4fa424u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) | GPR_U64(ctx, 6));
    // 0x4fa428: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FA428u;
    SET_GPR_U32(ctx, 31, 0x4FA430u);
    ctx->pc = 0x4FA42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA428u;
    // 0x4fa42c: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FA428u, 0x4FA430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA430u;
label_4fa430:
    // 0x4fa430: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x4fa430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4fa434: 0x3407e681  ori         $a3, $zero, 0xE681
    ctx->pc = 0x4fa434u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59009);
    // 0x4fa438: 0x73d38  dsll        $a3, $a3, 20
    ctx->pc = 0x4fa438u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 20);
    // 0x4fa43c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fa43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa440: 0x24c3003f  addiu       $v1, $a2, 0x3F
    ctx->pc = 0x4fa440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x4fa444: 0x28c20000  slti        $v0, $a2, 0x0
    ctx->pc = 0x4fa444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fa448: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x4fa448u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x4fa44c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4fa44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4fa450: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x4fa450u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x4fa454: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x4fa454u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x4fa458: 0x2063025  or          $a2, $s0, $a2
    ctx->pc = 0x4fa458u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    // 0x4fa45c: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FA45Cu;
    SET_GPR_U32(ctx, 31, 0x4FA464u);
    ctx->pc = 0x4FA460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA45Cu;
    // 0x4fa460: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FA45Cu, 0x4FA464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA464u;
label_4fa464:
    // 0x4fa464: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4FA464u;
    {
        const bool branch_taken_0x4fa464 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FA468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FA464u;
        // 0x4fa468: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa464) {
            ctx->pc = 0x4FA478u;
            goto label_4fa478;
        }
    }
    ctx->pc = 0x4FA46Cu;
    // 0x4fa46c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x4fa46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x4fa470: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FA470u;
    SET_GPR_U32(ctx, 31, 0x4FA478u);
    ctx->pc = 0x4FA474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA470u;
    // 0x4fa474: 0x24060061  addiu       $a2, $zero, 0x61 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FA470u, 0x4FA478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA478u;
label_4fa478:
    // 0x4fa478: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fa478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa47c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4fa47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa480: 0x3410ffff  ori         $s0, $zero, 0xFFFF
    ctx->pc = 0x4fa480u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4fa484: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x4fa484u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x4fa488: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FA488u;
    SET_GPR_U32(ctx, 31, 0x4FA490u);
    ctx->pc = 0x4FA48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA488u;
    // 0x4fa48c: 0x24060116  addiu       $a2, $zero, 0x116 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FA488u, 0x4FA490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA490u;
label_4fa490:
    // 0x4fa490: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4fa490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4fa494: 0x3406f200  ori         $a2, $zero, 0xF200
    ctx->pc = 0x4fa494u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61952);
    // 0x4fa498: 0x637f8  dsll        $a2, $a2, 31
    ctx->pc = 0x4fa498u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 31);
    // 0x4fa49c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x4fa49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x4fa4a0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x4fa4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4fa4a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fa4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa4a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fa4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4fa4ac: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4fa4acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4fa4b0: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x4fa4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x4fa4b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4fa4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4fa4b8: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FA4B8u;
    SET_GPR_U32(ctx, 31, 0x4FA4C0u);
    ctx->pc = 0x4FA4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA4B8u;
    // 0x4fa4bc: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FA4B8u, 0x4FA4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA4C0u;
label_4fa4c0:
    // 0x4fa4c0: 0xc042d66  jal         func_10B598
    ctx->pc = 0x4FA4C0u;
    SET_GPR_U32(ctx, 31, 0x4FA4C8u);
    ctx->pc = 0x4FA4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA4C0u;
    // 0x4fa4c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B598u, 0x4FA4C0u, 0x4FA4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA4C8u;
label_4fa4c8:
    // 0x4fa4c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fa4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa4cc: 0xc042d60  jal         func_10B580
    ctx->pc = 0x4FA4CCu;
    SET_GPR_U32(ctx, 31, 0x4FA4D4u);
    ctx->pc = 0x4FA4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA4CCu;
    // 0x4fa4d0: 0x7ba50020  lq          $a1, 0x20($sp) (Delay Slot)
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B580u, 0x4FA4CCu, 0x4FA4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA4D4u;
label_4fa4d4:
    // 0x4fa4d4: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x4fa4d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x4fa4d8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x4fa4d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x4fa4dc: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x4fa4dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x4fa4e0: 0xc042d90  jal         func_10B640
    ctx->pc = 0x4FA4E0u;
    SET_GPR_U32(ctx, 31, 0x4FA4E8u);
    ctx->pc = 0x4FA4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA4E0u;
    // 0x4fa4e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B640u, 0x4FA4E0u, 0x4FA4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA4E8u;
label_4fa4e8:
    // 0x4fa4e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4fa4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4fa4ec: 0xb52823  subu        $a1, $a1, $s5
    ctx->pc = 0x4fa4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x4fa4f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fa4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa4f4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x4fa4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x4fa4f8: 0xc042d90  jal         func_10B640
    ctx->pc = 0x4FA4F8u;
    SET_GPR_U32(ctx, 31, 0x4FA500u);
    ctx->pc = 0x4FA4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA4F8u;
    // 0x4fa4fc: 0x52c38  dsll        $a1, $a1, 16 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B640u, 0x4FA4F8u, 0x4FA500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA500u;
label_4fa500:
    // 0x4fa500: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x4fa500u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x4fa504: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x4fa504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4fa508: 0x24a57900  addiu       $a1, $a1, 0x7900
    ctx->pc = 0x4fa508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30976));
    // 0x4fa50c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x4fa50cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x4fa510: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fa510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa514: 0x3c31021  addu        $v0, $fp, $v1
    ctx->pc = 0x4fa514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x4fa518: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4fa518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4fa51c: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x4fa51cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4fa520: 0xc042d90  jal         func_10B640
    ctx->pc = 0x4FA520u;
    SET_GPR_U32(ctx, 31, 0x4FA528u);
    ctx->pc = 0x4FA524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA520u;
    // 0x4fa524: 0xb02825  or          $a1, $a1, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B640u, 0x4FA520u, 0x4FA528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA528u;
label_4fa528:
    // 0x4fa528: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4fa528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4fa52c: 0x240501e1  addiu       $a1, $zero, 0x1E1
    ctx->pc = 0x4fa52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 481));
    // 0x4fa530: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fa530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa534: 0xb52823  subu        $a1, $a1, $s5
    ctx->pc = 0x4fa534u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x4fa538: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4fa538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4fa53c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x4fa53cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x4fa540: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x4fa540u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x4fa544: 0xc042d90  jal         func_10B640
    ctx->pc = 0x4FA544u;
    SET_GPR_U32(ctx, 31, 0x4FA54Cu);
    ctx->pc = 0x4FA548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA544u;
    // 0x4fa548: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B640u, 0x4FA544u, 0x4FA54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA54Cu;
label_4fa54c:
    // 0x4fa54c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4fa54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4fa550: 0x24050790  addiu       $a1, $zero, 0x790
    ctx->pc = 0x4fa550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1936));
    // 0x4fa554: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x4fa554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4fa558: 0xb22823  subu        $a1, $a1, $s2
    ctx->pc = 0x4fa558u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x4fa55c: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x4fa55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x4fa560: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x4fa560u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x4fa564: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4fa564u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4fa568: 0x24a50e00  addiu       $a1, $a1, 0xE00
    ctx->pc = 0x4fa568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3584));
    // 0x4fa56c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4fa56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4fa570: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x4fa570u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x4fa574: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fa574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa578: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x4fa578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4fa57c: 0xc042d90  jal         func_10B640
    ctx->pc = 0x4FA57Cu;
    SET_GPR_U32(ctx, 31, 0x4FA584u);
    ctx->pc = 0x4FA580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA57Cu;
    // 0x4fa580: 0xb02825  or          $a1, $a1, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B640u, 0x4FA57Cu, 0x4FA584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA584u;
label_4fa584:
    // 0x4fa584: 0xc042d66  jal         func_10B598
    ctx->pc = 0x4FA584u;
    SET_GPR_U32(ctx, 31, 0x4FA58Cu);
    ctx->pc = 0x4FA588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA584u;
    // 0x4fa588: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B598u, 0x4FA584u, 0x4FA58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA58Cu;
label_4fa58c:
    // 0x4fa58c: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x4FA58Cu;
    {
        const bool branch_taken_0x4fa58c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FA590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FA58Cu;
        // 0x4fa590: 0x7ba50010  lq          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa58c) {
            ctx->pc = 0x4FA5E0u;
            goto label_4fa5e0;
        }
    }
    ctx->pc = 0x4FA594u;
    // 0x4fa594: 0xc042d60  jal         func_10B580
    ctx->pc = 0x4FA594u;
    SET_GPR_U32(ctx, 31, 0x4FA59Cu);
    ctx->pc = 0x4FA598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA594u;
    // 0x4fa598: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B580u, 0x4FA594u, 0x4FA59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA59Cu;
label_4fa59c:
    // 0x4fa59c: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x4fa59cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4fa5a0: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x4fa5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x4fa5a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fa5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa5a8: 0x24c3003f  addiu       $v1, $a2, 0x3F
    ctx->pc = 0x4fa5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x4fa5ac: 0x28c20000  slti        $v0, $a2, 0x0
    ctx->pc = 0x4fa5acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fa5b0: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x4fa5b0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x4fa5b4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x4fa5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x4fa5b8: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x4fa5b8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x4fa5bc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x4fa5bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x4fa5c0: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FA5C0u;
    SET_GPR_U32(ctx, 31, 0x4FA5C8u);
    ctx->pc = 0x4FA5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA5C0u;
    // 0x4fa5c4: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FA5C0u, 0x4FA5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA5C8u;
label_4fa5c8:
    // 0x4fa5c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4fa5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa5cc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x4fa5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x4fa5d0: 0xc042d9a  jal         func_10B668
    ctx->pc = 0x4FA5D0u;
    SET_GPR_U32(ctx, 31, 0x4FA5D8u);
    ctx->pc = 0x4FA5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA5D0u;
    // 0x4fa5d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B668u, 0x4FA5D0u, 0x4FA5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA5D8u;
label_4fa5d8:
    // 0x4fa5d8: 0xc042d66  jal         func_10B598
    ctx->pc = 0x4FA5D8u;
    SET_GPR_U32(ctx, 31, 0x4FA5E0u);
    ctx->pc = 0x4FA5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA5D8u;
    // 0x4fa5dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B598u, 0x4FA5D8u, 0x4FA5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA5E0u;
label_4fa5e0:
    // 0x4fa5e0: 0xc13ea58  jal         func_4FA960
    ctx->pc = 0x4FA5E0u;
    SET_GPR_U32(ctx, 31, 0x4FA5E8u);
    ctx->pc = 0x4FA960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FA960u, 0x4FA5E0u, 0x4FA5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA5E8u;
label_4fa5e8:
    // 0x4fa5e8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x4fa5e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4fa5ec:
    // 0x4fa5ec: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x4fa5ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4fa5f0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x4fa5f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4fa5f4: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x4fa5f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4fa5f8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x4fa5f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4fa5fc: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x4fa5fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4fa600: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x4fa600u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4fa604: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x4fa604u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4fa608: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x4fa608u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4fa60c: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x4fa60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x4fa610: 0x3e00008  jr          $ra
    ctx->pc = 0x4FA610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FA614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FA610u;
        // 0x4fa614: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FA610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FA618u;
}
