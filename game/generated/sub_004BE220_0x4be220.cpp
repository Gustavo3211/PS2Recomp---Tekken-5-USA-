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

// Function: sub_004BE220
// Address: 0x4be220 - 0x4be410
void sub_004BE220_0x4be220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BE220_0x4be220");
#endif

    switch (ctx->pc) {
        case 0x4be254u: goto label_4be254;
        case 0x4be25cu: goto label_4be25c;
        case 0x4be318u: goto label_4be318;
        case 0x4be354u: goto label_4be354;
        case 0x4be35cu: goto label_4be35c;
        case 0x4be364u: goto label_4be364;
        case 0x4be36cu: goto label_4be36c;
        case 0x4be374u: goto label_4be374;
        case 0x4be388u: goto label_4be388;
        case 0x4be39cu: goto label_4be39c;
        case 0x4be3a4u: goto label_4be3a4;
        case 0x4be3acu: goto label_4be3ac;
        case 0x4be3b4u: goto label_4be3b4;
        case 0x4be3bcu: goto label_4be3bc;
        case 0x4be3d0u: goto label_4be3d0;
        case 0x4be3e0u: goto label_4be3e0;
        case 0x4be3e8u: goto label_4be3e8;
        case 0x4be3f0u: goto label_4be3f0;
        default: break;
    }

    ctx->pc = 0x4be220u;

    // 0x4be220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4be220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4be224: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4be224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4be228: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4be228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be22c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4be22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4be230: 0x263201b4  addiu       $s2, $s1, 0x1B4
    ctx->pc = 0x4be230u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 436));
    // 0x4be234: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4be234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4be238: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4be238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4be23c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4be23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4be240: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4be240u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4be244: 0x4400022  bltz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x4BE244u;
    {
        const bool branch_taken_0x4be244 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4BE248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE244u;
        // 0x4be248: 0x26270008  addiu       $a3, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be244) {
            ctx->pc = 0x4BE2D0u;
            goto label_4be2d0;
        }
    }
    ctx->pc = 0x4BE24Cu;
    // 0x4be24c: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4BE24Cu;
    SET_GPR_U32(ctx, 31, 0x4BE254u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4BE24Cu, 0x4BE254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE254u;
label_4be254:
    // 0x4be254: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4BE254u;
    SET_GPR_U32(ctx, 31, 0x4BE25Cu);
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4BE254u, 0x4BE25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE25Cu;
label_4be25c:
    // 0x4be25c: 0xa622015e  sh          $v0, 0x15E($s1)
    ctx->pc = 0x4be25cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4be260: 0x26270008  addiu       $a3, $s1, 0x8
    ctx->pc = 0x4be260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x4be264: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4be264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4be268: 0x3604ffff  ori         $a0, $s0, 0xFFFF
    ctx->pc = 0x4be268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4be26c: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x4be26cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4be270: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x4be270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x4be274: 0x3c080054  lui         $t0, 0x54
    ctx->pc = 0x4be274u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)84 << 16));
    // 0x4be278: 0x2463ffda  addiu       $v1, $v1, -0x26
    ctx->pc = 0x4be278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967258));
    // 0x4be27c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4be27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4be280: 0x838024  and         $s0, $a0, $v1
    ctx->pc = 0x4be280u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4be284: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x4be284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4be288: 0x3604ffff  ori         $a0, $s0, 0xFFFF
    ctx->pc = 0x4be288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4be28c: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x4be28cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x4be290: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4be290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4be294: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x4be294u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4be298: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x4be298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4be29c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4be29cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4be2a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4be2a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4be2a4: 0x24216ff0  addiu       $at, $at, 0x6FF0
    ctx->pc = 0x4be2a4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 28656));
    // 0x4be2a8: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x4be2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x4be2ac: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4be2acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4be2b0: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x4be2b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4be2b4: 0x9464000c  lhu         $a0, 0xC($v1)
    ctx->pc = 0x4be2b4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4be2b8: 0xa626015c  sh          $a2, 0x15C($s1)
    ctx->pc = 0x4be2b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 348), (uint16_t)GPR_U32(ctx, 6));
    // 0x4be2bc: 0xa6240158  sh          $a0, 0x158($s1)
    ctx->pc = 0x4be2bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 344), (uint16_t)GPR_U32(ctx, 4));
    // 0x4be2c0: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4be2c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4be2c4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4be2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4be2c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4BE2C8u;
    {
        const bool branch_taken_0x4be2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE2C8u;
        // 0x4be2cc: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be2c8) {
            ctx->pc = 0x4BE2D4u;
            goto label_4be2d4;
        }
    }
    ctx->pc = 0x4BE2D0u;
label_4be2d0:
    // 0x4be2d0: 0x3c080054  lui         $t0, 0x54
    ctx->pc = 0x4be2d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)84 << 16));
label_4be2d4:
    // 0x4be2d4: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4be2d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4be2d8: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4be2d8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4be2dc: 0x3605ffff  ori         $a1, $s0, 0xFFFF
    ctx->pc = 0x4be2dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4be2e0: 0x25066ff0  addiu       $a2, $t0, 0x6FF0
    ctx->pc = 0x4be2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 28656));
    // 0x4be2e4: 0x2442ffda  addiu       $v0, $v0, -0x26
    ctx->pc = 0x4be2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967258));
    // 0x4be2e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4be2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be2ec: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4be2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4be2f0: 0xa28024  and         $s0, $a1, $v0
    ctx->pc = 0x4be2f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4be2f4: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x4be2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4be2f8: 0x3605ffff  ori         $a1, $s0, 0xFFFF
    ctx->pc = 0x4be2f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4be2fc: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4be2fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4be300: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4be300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4be304: 0xa38024  and         $s0, $a1, $v1
    ctx->pc = 0x4be304u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4be308: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x4be308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4be30c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4be30cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4be310: 0xc12564a  jal         func_495928
    ctx->pc = 0x4BE310u;
    SET_GPR_U32(ctx, 31, 0x4BE318u);
    ctx->pc = 0x4BE314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE310u;
    // 0x4be314: 0x468021  addu        $s0, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x495928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495928u, 0x4BE310u, 0x4BE318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE318u;
label_4be318:
    // 0x4be318: 0x3669ffff  ori         $t1, $s3, 0xFFFF
    ctx->pc = 0x4be318u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x4be31c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4be31cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be320: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x4be320u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be324: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x4BE324u;
    {
        const bool branch_taken_0x4be324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE324u;
        // 0x4be328: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be324) {
            ctx->pc = 0x4BE3F0u;
            goto label_4be3f0;
        }
    }
    ctx->pc = 0x4BE32Cu;
    // 0x4be32c: 0x86060006  lh          $a2, 0x6($s0)
    ctx->pc = 0x4be32cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x4be330: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x4be330u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x4be334: 0x86050004  lh          $a1, 0x4($s0)
    ctx->pc = 0x4be334u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4be338: 0xd23025  or          $a2, $a2, $s2
    ctx->pc = 0x4be338u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 18));
    // 0x4be33c: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x4be33cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x4be340: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x4be340u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x4be344: 0xb22825  or          $a1, $a1, $s2
    ctx->pc = 0x4be344u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    // 0x4be348: 0x1242024  and         $a0, $t1, $a0
    ctx->pc = 0x4be348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
    // 0x4be34c: 0xc127c58  jal         func_49F160
    ctx->pc = 0x4BE34Cu;
    SET_GPR_U32(ctx, 31, 0x4BE354u);
    ctx->pc = 0x4BE350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE34Cu;
    // 0x4be350: 0x652824  and         $a1, $v1, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F160u, 0x4BE34Cu, 0x4BE354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE354u;
label_4be354:
    // 0x4be354: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4BE354u;
    SET_GPR_U32(ctx, 31, 0x4BE35Cu);
    ctx->pc = 0x4BE358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE354u;
    // 0x4be358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4BE354u, 0x4BE35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE35Cu;
label_4be35c:
    // 0x4be35c: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4BE35Cu;
    SET_GPR_U32(ctx, 31, 0x4BE364u);
    ctx->pc = 0x4BE360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE35Cu;
    // 0x4be360: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4BE35Cu, 0x4BE364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE364u;
label_4be364:
    // 0x4be364: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4BE364u;
    SET_GPR_U32(ctx, 31, 0x4BE36Cu);
    ctx->pc = 0x4BE368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE364u;
    // 0x4be368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4BE364u, 0x4BE36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE36Cu;
label_4be36c:
    // 0x4be36c: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4BE36Cu;
    SET_GPR_U32(ctx, 31, 0x4BE374u);
    ctx->pc = 0x4BE370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE36Cu;
    // 0x4be370: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4BE36Cu, 0x4BE374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE374u;
label_4be374:
    // 0x4be374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4be374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be378: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x4BE378u;
    {
        const bool branch_taken_0x4be378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE378u;
        // 0x4be37c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be378) {
            ctx->pc = 0x4BE3F0u;
            goto label_4be3f0;
        }
    }
    ctx->pc = 0x4BE380u;
    // 0x4be380: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4BE380u;
    SET_GPR_U32(ctx, 31, 0x4BE388u);
    ctx->pc = 0x4BE384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE380u;
    // 0x4be384: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4BE380u, 0x4BE388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE388u;
label_4be388:
    // 0x4be388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4be388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be38c: 0x1450000e  bne         $v0, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x4BE38Cu;
    {
        const bool branch_taken_0x4be38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x4BE390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE38Cu;
        // 0x4be390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be38c) {
            ctx->pc = 0x4BE3C8u;
            goto label_4be3c8;
        }
    }
    ctx->pc = 0x4BE394u;
    // 0x4be394: 0xc12f904  jal         func_4BE410
    ctx->pc = 0x4BE394u;
    SET_GPR_U32(ctx, 31, 0x4BE39Cu);
    ctx->pc = 0x4BE410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE410u, 0x4BE394u, 0x4BE39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE39Cu;
label_4be39c:
    // 0x4be39c: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4BE39Cu;
    SET_GPR_U32(ctx, 31, 0x4BE3A4u);
    ctx->pc = 0x4BE3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE39Cu;
    // 0x4be3a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4BE39Cu, 0x4BE3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE3A4u;
label_4be3a4:
    // 0x4be3a4: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4BE3A4u;
    SET_GPR_U32(ctx, 31, 0x4BE3ACu);
    ctx->pc = 0x4BE3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE3A4u;
    // 0x4be3a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4BE3A4u, 0x4BE3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE3ACu;
label_4be3ac:
    // 0x4be3ac: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4BE3ACu;
    SET_GPR_U32(ctx, 31, 0x4BE3B4u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4BE3ACu, 0x4BE3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE3B4u;
label_4be3b4:
    // 0x4be3b4: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4BE3B4u;
    SET_GPR_U32(ctx, 31, 0x4BE3BCu);
    ctx->pc = 0x4BE3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE3B4u;
    // 0x4be3b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4BE3B4u, 0x4BE3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE3BCu;
label_4be3bc:
    // 0x4be3bc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4BE3BCu;
    {
        const bool branch_taken_0x4be3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE3BCu;
        // 0x4be3c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be3bc) {
            ctx->pc = 0x4BE3F4u;
            goto label_4be3f4;
        }
    }
    ctx->pc = 0x4BE3C4u;
    // 0x4be3c4: 0x0  nop
    ctx->pc = 0x4be3c4u;
    // NOP
label_4be3c8:
    // 0x4be3c8: 0xc1280fa  jal         func_4A03E8
    ctx->pc = 0x4BE3C8u;
    SET_GPR_U32(ctx, 31, 0x4BE3D0u);
    ctx->pc = 0x4BE3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE3C8u;
    // 0x4be3cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A03E8u, 0x4BE3C8u, 0x4BE3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE3D0u;
label_4be3d0:
    // 0x4be3d0: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4BE3D0u;
    {
        const bool branch_taken_0x4be3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x4BE3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE3D0u;
        // 0x4be3d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be3d0) {
            ctx->pc = 0x4BE3F0u;
            goto label_4be3f0;
        }
    }
    ctx->pc = 0x4BE3D8u;
    // 0x4be3d8: 0xc12f904  jal         func_4BE410
    ctx->pc = 0x4BE3D8u;
    SET_GPR_U32(ctx, 31, 0x4BE3E0u);
    ctx->pc = 0x4BE410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE410u, 0x4BE3D8u, 0x4BE3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE3E0u;
label_4be3e0:
    // 0x4be3e0: 0xc122f26  jal         func_48BC98
    ctx->pc = 0x4BE3E0u;
    SET_GPR_U32(ctx, 31, 0x4BE3E8u);
    ctx->pc = 0x4BE3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE3E0u;
    // 0x4be3e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BC98u, 0x4BE3E0u, 0x4BE3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE3E8u;
label_4be3e8:
    // 0x4be3e8: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4BE3E8u;
    SET_GPR_U32(ctx, 31, 0x4BE3F0u);
    ctx->pc = 0x4BE3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE3E8u;
    // 0x4be3ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4BE3E8u, 0x4BE3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE3F0u;
label_4be3f0:
    // 0x4be3f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4be3f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4be3f4:
    // 0x4be3f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4be3f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4be3f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4be3f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4be3fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4be3fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4be400: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4be400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4be404: 0x3e00008  jr          $ra
    ctx->pc = 0x4BE404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BE408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE404u;
        // 0x4be408: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BE404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BE40Cu;
    // 0x4be40c: 0x0  nop
    ctx->pc = 0x4be40cu;
    // NOP
    ctx->pc = 0x4be410u;
}
