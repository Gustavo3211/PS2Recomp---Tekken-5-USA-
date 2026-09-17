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

// Function: sub_00495928
// Address: 0x495928 - 0x495c08
void sub_00495928_0x495928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00495928_0x495928");
#endif

    switch (ctx->pc) {
        case 0x49596cu: goto label_49596c;
        case 0x495980u: goto label_495980;
        case 0x495a90u: goto label_495a90;
        case 0x495b88u: goto label_495b88;
        case 0x495b90u: goto label_495b90;
        case 0x495bc8u: goto label_495bc8;
        default: break;
    }

    ctx->pc = 0x495928u;

    // 0x495928: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x495928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x49592c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49592cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x495930: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x495930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495934: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x495934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x495938: 0x261601b6  addiu       $s6, $s0, 0x1B6
    ctx->pc = 0x495938u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 438));
    // 0x49593c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x49593cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x495940: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x495940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x495944: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x495944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x495948: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x495948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x49594c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x49594cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x495950: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x495950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x495954: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x495954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x495958: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x495958u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x49595c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x49595Cu;
    {
        const bool branch_taken_0x49595c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x49595c) {
            ctx->pc = 0x495978u;
            goto label_495978;
        }
    }
    ctx->pc = 0x495964u;
    // 0x495964: 0xc1255ba  jal         func_4956E8
    ctx->pc = 0x495964u;
    SET_GPR_U32(ctx, 31, 0x49596Cu);
    ctx->pc = 0x4956E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4956E8u, 0x495964u, 0x49596Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49596Cu;
label_49596c:
    // 0x49596c: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x49596Cu;
    {
        const bool branch_taken_0x49596c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x495970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49596Cu;
        // 0x495970: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49596c) {
            ctx->pc = 0x495BDCu;
            goto label_495bdc;
        }
    }
    ctx->pc = 0x495974u;
    // 0x495974: 0x0  nop
    ctx->pc = 0x495974u;
    // NOP
label_495978:
    // 0x495978: 0xc1252c4  jal         func_494B10
    ctx->pc = 0x495978u;
    SET_GPR_U32(ctx, 31, 0x495980u);
    ctx->pc = 0x49597Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495978u;
    // 0x49597c: 0x261501b8  addiu       $s5, $s0, 0x1B8 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x494B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x494B10u, 0x495978u, 0x495980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495980u;
label_495980:
    // 0x495980: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x495980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x495984: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x495984u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x495988: 0x54570009  bnel        $v0, $s7, . + 4 + (0x9 << 2)
    ctx->pc = 0x495988u;
    {
        const bool branch_taken_0x495988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x495988) {
            ctx->pc = 0x49598Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x495988u;
            // 0x49598c: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4959B0u;
            goto label_4959b0;
        }
    }
    ctx->pc = 0x495990u;
    // 0x495990: 0x96030118  lhu         $v1, 0x118($s0)
    ctx->pc = 0x495990u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x495994: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x495994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x495998: 0x2484d680  addiu       $a0, $a0, -0x2980
    ctx->pc = 0x495998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x49599c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49599cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4959a0: 0xa48324a0  sh          $v1, 0x24A0($a0)
    ctx->pc = 0x4959a0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72FB20u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FB20u, _value); } while (0);
    // 0x4959a4: 0x9605011c  lhu         $a1, 0x11C($s0)
    ctx->pc = 0x4959a4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x4959a8: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x4959A8u;
    {
        const bool branch_taken_0x4959a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4959ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4959A8u;
        // 0x4959ac: 0xa48524a2  sh          $a1, 0x24A2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 9378), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4959a8) {
            ctx->pc = 0x495BDCu;
            goto label_495bdc;
        }
    }
    ctx->pc = 0x4959B0u;
label_4959b0:
    // 0x4959b0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4959b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4959b4: 0x24530ab0  addiu       $s3, $v0, 0xAB0
    ctx->pc = 0x4959b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 2736));
    // 0x4959b8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4959b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4959bc: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4959bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4959c0: 0x34630064  ori         $v1, $v1, 0x64
    ctx->pc = 0x4959c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)100);
    // 0x4959c4: 0x24510ab4  addiu       $s1, $v0, 0xAB4
    ctx->pc = 0x4959c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2740));
    // 0x4959c8: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x4959c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4959cc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x4959ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0AB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0AB4u, _value); } while (0);
    // 0x4959d0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x4959d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4959d4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4959d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4959d8: 0x9204015b  lbu         $a0, 0x15B($s0)
    ctx->pc = 0x4959d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 347)));
    // 0x4959dc: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4959dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4959e0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4959e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4959e4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4959e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4959e8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4959e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4959ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4959ECu;
    {
        const bool branch_taken_0x4959ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4959F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4959ECu;
        // 0x4959f0: 0x3c12ffff  lui         $s2, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4959ec) {
            ctx->pc = 0x4959FCu;
            goto label_4959fc;
        }
    }
    ctx->pc = 0x4959F4u;
    // 0x4959f4: 0x30a20064  andi        $v0, $a1, 0x64
    ctx->pc = 0x4959f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)100);
    // 0x4959f8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4959f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4959fc:
    // 0x4959fc: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4959fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x495a00: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x495a00u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x495a04: 0x2454d680  addiu       $s4, $v0, -0x2980
    ctx->pc = 0x495a04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x495a08: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x495a08u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x495a0c: 0x8e842494  lw          $a0, 0x2494($s4)
    ctx->pc = 0x495a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x72FB14u));
    // 0x495a10: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x495a10u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x495a14: 0x8e832498  lw          $v1, 0x2498($s4)
    ctx->pc = 0x495a14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x72FB18u));
    // 0x495a18: 0x25ad0abc  addiu       $t5, $t5, 0xABC
    ctx->pc = 0x495a18u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2748));
    // 0x495a1c: 0x8e82249c  lw          $v0, 0x249C($s4)
    ctx->pc = 0x495a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x72FB1Cu));
    // 0x495a20: 0x258c0ac0  addiu       $t4, $t4, 0xAC0
    ctx->pc = 0x495a20u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2752));
    // 0x495a24: 0x256b0ac4  addiu       $t3, $t3, 0xAC4
    ctx->pc = 0x495a24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2756));
    // 0x495a28: 0x8daa0000  lw          $t2, 0x0($t5)
    ctx->pc = 0x495a28u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x7F0ABCu));
    // 0x495a2c: 0x8d890000  lw          $t1, 0x0($t4)
    ctx->pc = 0x495a2cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x7F0AC0u));
    // 0x495a30: 0x922024  and         $a0, $a0, $s2
    ctx->pc = 0x495a30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 18));
    // 0x495a34: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x495a34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x495a38: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x495a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x495a3c: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x495a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x495a40: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x495a40u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x495a44: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x495a44u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x495a48: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x495a48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x495a4c: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x495a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x495a50: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x495a50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x495a54: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x495a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x495a58: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x495a58u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x495a5c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x495a5cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x495a60: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x495a60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x495a64: 0x1445024  and         $t2, $t2, $a0
    ctx->pc = 0x495a64u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 4));
    // 0x495a68: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x495a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x495a6c: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x495a6cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x495a70: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x495a70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x495a74: 0xadaa0000  sw          $t2, 0x0($t5)
    ctx->pc = 0x495a74u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 10));
    // 0x495a78: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x495a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495a7c: 0xad890000  sw          $t1, 0x0($t4)
    ctx->pc = 0x495a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 9));
    // 0x495a80: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x495a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495a84: 0xad680000  sw          $t0, 0x0($t3)
    ctx->pc = 0x495a84u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 8));
    // 0x495a88: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x495A88u;
    SET_GPR_U32(ctx, 31, 0x495A90u);
    ctx->pc = 0x495A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495A88u;
    // 0x495a8c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x495A88u, 0x495A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495A90u;
label_495a90:
    // 0x495a90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x495a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x495a94: 0x1443003c  bne         $v0, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x495A94u;
    {
        const bool branch_taken_0x495a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x495A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495A94u;
        // 0x495a98: 0x260801ba  addiu       $t0, $s0, 0x1BA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 442));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495a94) {
            ctx->pc = 0x495B88u;
            goto label_495b88;
        }
    }
    ctx->pc = 0x495A9Cu;
    // 0x495a9c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x495a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x495aa0: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x495aa0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x495aa4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x495aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x495aa8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x495aa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x495aac: 0x8e872308  lw          $a3, 0x2308($s4)
    ctx->pc = 0x495aacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8968)));
    // 0x495ab0: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x495ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x495ab4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x495ab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x495ab8: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x495ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x495abc: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x495abcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x495ac0: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x495ac0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x495ac4: 0xa6001a  div         $zero, $a1, $a2
    ctx->pc = 0x495ac4u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x495ac8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x495ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x495acc: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x495accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x495ad0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x495ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x495ad4: 0x2812  mflo        $a1
    ctx->pc = 0x495ad4u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x495ad8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x495ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x495adc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x495adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x495ae0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x495ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x495ae4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x495ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x495ae8: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x495ae8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x495aec: 0x480002a  bltz        $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x495AECu;
    {
        const bool branch_taken_0x495aec = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x495AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495AECu;
        // 0x495af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495aec) {
            ctx->pc = 0x495B98u;
            goto label_495b98;
        }
    }
    ctx->pc = 0x495AF4u;
    // 0x495af4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x495af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x495af8: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x495af8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x495afc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x495afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x495b00: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x495b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x495b04: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x495b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x495b08: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x495b08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x495b0c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x495b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x495b10: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x495b10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x495b14: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x495b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x495b18: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x495b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x495b1c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x495b1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x495b20: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x495b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x495b24: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x495b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x495b28: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x495b28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x495b2c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x495b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x495b30: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x495b30u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x495b34: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x495b34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x495b38: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x495b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x495b3c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x495b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x495b40: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x495b40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x495b44: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x495b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x495b48: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x495b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x495b4c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x495b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x495b50: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x495b50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x495b54: 0xa6c20000  sh          $v0, 0x0($s6)
    ctx->pc = 0x495b54u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x495b58: 0x94c30002  lhu         $v1, 0x2($a2)
    ctx->pc = 0x495b58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x495b5c: 0xa603011a  sh          $v1, 0x11A($s0)
    ctx->pc = 0x495b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 282), (uint16_t)GPR_U32(ctx, 3));
    // 0x495b60: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x495b60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x495b64: 0xa602011e  sh          $v0, 0x11E($s0)
    ctx->pc = 0x495b64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 286), (uint16_t)GPR_U32(ctx, 2));
    // 0x495b68: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x495b68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x495b6c: 0xa6030122  sh          $v1, 0x122($s0)
    ctx->pc = 0x495b6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 290), (uint16_t)GPR_U32(ctx, 3));
    // 0x495b70: 0x94c50008  lhu         $a1, 0x8($a2)
    ctx->pc = 0x495b70u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x495b74: 0xa605015c  sh          $a1, 0x15C($s0)
    ctx->pc = 0x495b74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 348), (uint16_t)GPR_U32(ctx, 5));
    // 0x495b78: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x495b78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x495b7c: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x495b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x495b80: 0xc125302  jal         func_494C08
    ctx->pc = 0x495B80u;
    SET_GPR_U32(ctx, 31, 0x495B88u);
    ctx->pc = 0x495B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495B80u;
    // 0x495b84: 0xa5020000  sh          $v0, 0x0($t0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x494C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x494C08u, 0x495B80u, 0x495B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495B88u;
label_495b88:
    // 0x495b88: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x495B88u;
    SET_GPR_U32(ctx, 31, 0x495B90u);
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x495B88u, 0x495B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495B90u;
label_495b90:
    // 0x495b90: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x495B90u;
    {
        const bool branch_taken_0x495b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x495B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495B90u;
        // 0x495b94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495b90) {
            ctx->pc = 0x495BDCu;
            goto label_495bdc;
        }
    }
    ctx->pc = 0x495B98u;
label_495b98:
    // 0x495b98: 0xa6b70000  sh          $s7, 0x0($s5)
    ctx->pc = 0x495b98u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 23));
    // 0x495b9c: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x495b9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x495ba0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x495ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x495ba4: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x495ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x495ba8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x495ba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x495bac: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x495bacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x495bb0: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x495bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x495bb4: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x495bb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x495bb8: 0x50770005  beql        $v1, $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x495BB8u;
    {
        const bool branch_taken_0x495bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        if (branch_taken_0x495bb8) {
            ctx->pc = 0x495BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x495BB8u;
            // 0x495bbc: 0x96030118  lhu         $v1, 0x118($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x495BD0u;
            goto label_495bd0;
        }
    }
    ctx->pc = 0x495BC0u;
    // 0x495bc0: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x495BC0u;
    SET_GPR_U32(ctx, 31, 0x495BC8u);
    ctx->pc = 0x495BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495BC0u;
    // 0x495bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x495BC0u, 0x495BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495BC8u;
label_495bc8:
    // 0x495bc8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x495BC8u;
    {
        const bool branch_taken_0x495bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x495BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495BC8u;
        // 0x495bcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495bc8) {
            ctx->pc = 0x495BDCu;
            goto label_495bdc;
        }
    }
    ctx->pc = 0x495BD0u;
label_495bd0:
    // 0x495bd0: 0xa68324a0  sh          $v1, 0x24A0($s4)
    ctx->pc = 0x495bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 9376), (uint16_t)GPR_U32(ctx, 3));
    // 0x495bd4: 0x9604011c  lhu         $a0, 0x11C($s0)
    ctx->pc = 0x495bd4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x495bd8: 0xa68424a2  sh          $a0, 0x24A2($s4)
    ctx->pc = 0x495bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 9378), (uint16_t)GPR_U32(ctx, 4));
label_495bdc:
    // 0x495bdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x495bdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x495be0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x495be0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x495be4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x495be4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x495be8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x495be8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x495bec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x495becu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x495bf0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x495bf0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x495bf4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x495bf4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x495bf8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x495bf8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x495bfc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x495bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x495c00: 0x3e00008  jr          $ra
    ctx->pc = 0x495C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x495C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495C00u;
        // 0x495c04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x495C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x495C08u;
}
