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

// Function: sub_00107198
// Address: 0x107198 - 0x1073d8
void sub_00107198_0x107198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107198_0x107198");
#endif

    switch (ctx->pc) {
        case 0x1071f0u: goto label_1071f0;
        case 0x1071f4u: goto label_1071f4;
        case 0x1071fcu: goto label_1071fc;
        case 0x107218u: goto label_107218;
        case 0x107220u: goto label_107220;
        case 0x107268u: goto label_107268;
        case 0x10728cu: goto label_10728c;
        case 0x107300u: goto label_107300;
        case 0x107330u: goto label_107330;
        case 0x107360u: goto label_107360;
        case 0x107394u: goto label_107394;
        case 0x1073acu: goto label_1073ac;
        default: break;
    }

    ctx->pc = 0x107198u;

    // 0x107198: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x107198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10719c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10719cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1071a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1071a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1071a4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1071a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1071a8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1071a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1071ac: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1071acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1071b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1071b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1071b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1071b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1071b8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1071b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1071bc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1071bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1071c0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1071c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1071c4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1071c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1071c8: 0xae200820  sw          $zero, 0x820($s1)
    ctx->pc = 0x1071c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2080), GPR_U32(ctx, 0));
    // 0x1071cc: 0x8e220140  lw          $v0, 0x140($s1)
    ctx->pc = 0x1071ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x1071d0: 0x8e24013c  lw          $a0, 0x13C($s1)
    ctx->pc = 0x1071d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x1071d4: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x1071d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x1071d8: 0x828018  mult        $s0, $a0, $v0
    ctx->pc = 0x1071d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1071dc: 0xae200824  sw          $zero, 0x824($s1)
    ctx->pc = 0x1071dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2084), GPR_U32(ctx, 0));
    // 0x1071e0: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x1071e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x1071e4: 0x101043  sra         $v0, $s0, 1
    ctx->pc = 0x1071e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 1));
    // 0x1071e8: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x1071e8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x1071ec: 0x0  nop
    ctx->pc = 0x1071ecu;
    // NOP
label_1071f0:
    // 0x1071f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1071f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1071f4:
    // 0x1071f4: 0xc041cf6  jal         func_1073D8
    ctx->pc = 0x1071F4u;
    SET_GPR_U32(ctx, 31, 0x1071FCu);
    ctx->pc = 0x1071F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1071F4u;
    // 0x1071f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1073D8u, 0x1071F4u, 0x1071FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1071FCu;
label_1071fc:
    // 0x1071fc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1071fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107200: 0x12b3fffc  beq         $s5, $s3, . + 4 + (-0x4 << 2)
    ctx->pc = 0x107200u;
    {
        const bool branch_taken_0x107200 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 19));
        ctx->pc = 0x107204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107200u;
        // 0x107204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107200) {
            ctx->pc = 0x1071F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1071f4;
        }
    }
    ctx->pc = 0x107208u;
    // 0x107208: 0x12b2fff9  beq         $s5, $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x107208u;
    {
        const bool branch_taken_0x107208 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 18));
        if (branch_taken_0x107208) {
            ctx->pc = 0x1071F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1071f0;
        }
    }
    ctx->pc = 0x107210u;
    // 0x107210: 0xc042226  jal         func_108898
    ctx->pc = 0x107210u;
    SET_GPR_U32(ctx, 31, 0x107218u);
    ctx->pc = 0x107214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107210u;
    // 0x107214: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108898u, 0x107210u, 0x107218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107218u;
label_107218:
    // 0x107218: 0xc042226  jal         func_108898
    ctx->pc = 0x107218u;
    SET_GPR_U32(ctx, 31, 0x107220u);
    ctx->pc = 0x10721Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107218u;
    // 0x10721c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108898u, 0x107218u, 0x107220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107220u;
label_107220:
    // 0x107220: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x107220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x107224: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x107224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x107228: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x107228u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u)); // MMIO: 0x1000b020
    // 0x10722c: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x10722Cu;
    {
        const bool branch_taken_0x10722c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x107230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10722Cu;
        // 0x107230: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10722c) {
            ctx->pc = 0x1072B4u;
            goto label_1072b4;
        }
    }
    ctx->pc = 0x107234u;
    // 0x107234: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x107234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x107238: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x107238u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10002010
    // 0x10723c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x10723cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x107240: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x107240u;
    {
        const bool branch_taken_0x107240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107240u;
        // 0x107244: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107240) {
            ctx->pc = 0x1072B8u;
            goto label_1072b8;
        }
    }
    ctx->pc = 0x107248u;
    // 0x107248: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x107248u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x10724c: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x10724cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x107250: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x107250u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x107254: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x107254u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x107258: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x107258u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
    // 0x10725c: 0x3673b400  ori         $s3, $s3, 0xB400
    ctx->pc = 0x10725cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)46080);
    // 0x107260: 0x3652b020  ori         $s2, $s2, 0xB020
    ctx->pc = 0x107260u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)45088);
    // 0x107264: 0x36102010  ori         $s0, $s0, 0x2010
    ctx->pc = 0x107264u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8208);
label_107268:
    // 0x107268: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x107268u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 20), 0))); // MMIO: 0x1000b420
    // 0x10726c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x10726Cu;
    {
        const bool branch_taken_0x10726c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10726c) {
            ctx->pc = 0x107270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10726Cu;
            // 0x107270: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107290u;
            goto label_107290;
        }
    }
    ctx->pc = 0x107274u;
    // 0x107274: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x107274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x107278: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x107278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x10727c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10727Cu;
    {
        const bool branch_taken_0x10727c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10727c) {
            ctx->pc = 0x107280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10727Cu;
            // 0x107280: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107290u;
            goto label_107290;
        }
    }
    ctx->pc = 0x107284u;
    // 0x107284: 0xc0411a4  jal         func_104690
    ctx->pc = 0x107284u;
    SET_GPR_U32(ctx, 31, 0x10728Cu);
    ctx->pc = 0x107288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107284u;
    // 0x107288: 0x8e240868  lw          $a0, 0x868($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104690u, 0x107284u, 0x10728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10728Cu;
label_10728c:
    // 0x10728c: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x10728cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
label_107290:
    // 0x107290: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x107290u;
    {
        const bool branch_taken_0x107290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107290) {
            ctx->pc = 0x1072F8u;
            goto label_1072f8;
        }
    }
    ctx->pc = 0x107298u;
    // 0x107298: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x107298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10729c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10729Cu;
    {
        const bool branch_taken_0x10729c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1072A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10729Cu;
        // 0x1072a0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10729c) {
            ctx->pc = 0x1072B8u;
            goto label_1072b8;
        }
    }
    ctx->pc = 0x1072A4u;
    // 0x1072a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1072a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1072a8: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1072a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1072ac: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1072ACu;
    {
        const bool branch_taken_0x1072ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1072ac) {
            ctx->pc = 0x107268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107268;
        }
    }
    ctx->pc = 0x1072B4u;
label_1072b4:
    // 0x1072b4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1072b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1072b8:
    // 0x1072b8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1072b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1072bc: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x1072bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x1072c0: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x1072c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x1072c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1072c4u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10002020
    // 0x1072c8: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x1072c8u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x1072cc: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1072ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1072d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1072d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1072d4: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1072D4u;
    {
        const bool branch_taken_0x1072d4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1072D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072D4u;
        // 0x1072d8: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1072d4) {
            ctx->pc = 0x107308u;
            goto label_107308;
        }
    }
    ctx->pc = 0x1072DCu;
    // 0x1072dc: 0x30a3001f  andi        $v1, $a1, 0x1F
    ctx->pc = 0x1072dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x1072e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1072E0u;
    {
        const bool branch_taken_0x1072e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1072E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072E0u;
        // 0x1072e4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1072e0) {
            ctx->pc = 0x1072F0u;
            goto label_1072f0;
        }
    }
    ctx->pc = 0x1072E8u;
    // 0x1072e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1072E8u;
    {
        const bool branch_taken_0x1072e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1072ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072E8u;
        // 0x1072ec: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1072e8) {
            ctx->pc = 0x10730Cu;
            goto label_10730c;
        }
    }
    ctx->pc = 0x1072F0u;
label_1072f0:
    // 0x1072f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1072F0u;
    {
        const bool branch_taken_0x1072f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1072F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072F0u;
        // 0x1072f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1072f0) {
            ctx->pc = 0x10730Cu;
            goto label_10730c;
        }
    }
    ctx->pc = 0x1072F8u;
label_1072f8:
    // 0x1072f8: 0xc041782  jal         func_105E08
    ctx->pc = 0x1072F8u;
    SET_GPR_U32(ctx, 31, 0x107300u);
    ctx->pc = 0x105E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105E08u, 0x1072F8u, 0x107300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107300u;
label_107300:
    // 0x107300: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x107300u;
    {
        const bool branch_taken_0x107300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107300u;
        // 0x107304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107300) {
            ctx->pc = 0x107334u;
            goto label_107334;
        }
    }
    ctx->pc = 0x107308u;
label_107308:
    // 0x107308: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x107308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_10730c:
    // 0x10730c: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x10730cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x107310: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x107310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x107314: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x107314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x107318: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x107318u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x10731c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x10731cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x107320: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x107320u;
    {
        const bool branch_taken_0x107320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x107324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107320u;
        // 0x107324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107320) {
            ctx->pc = 0x107330u;
            goto label_107330;
        }
    }
    ctx->pc = 0x107328u;
    // 0x107328: 0xc0417aa  jal         func_105EA8
    ctx->pc = 0x107328u;
    SET_GPR_U32(ctx, 31, 0x107330u);
    ctx->pc = 0x10732Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107328u;
    // 0x10732c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105EA8u, 0x107328u, 0x107330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107330u;
label_107330:
    // 0x107330: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x107330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_107334:
    // 0x107334: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x107334u;
    {
        const bool branch_taken_0x107334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107334u;
        // 0x107338: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107334) {
            ctx->pc = 0x107350u;
            goto label_107350;
        }
    }
    ctx->pc = 0x10733Cu;
    // 0x10733c: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x10733cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
    // 0x107340: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x107340u;
    {
        const bool branch_taken_0x107340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107340u;
        // 0x107344: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107340) {
            ctx->pc = 0x1073B0u;
            goto label_1073b0;
        }
    }
    ctx->pc = 0x107348u;
    // 0x107348: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x107348u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10734c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10734cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_107350:
    // 0x107350: 0x26b0ffff  addiu       $s0, $s5, -0x1
    ctx->pc = 0x107350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x107354: 0x2eb20001  sltiu       $s2, $s5, 0x1
    ctx->pc = 0x107354u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x107358: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x107358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x10735c: 0x0  nop
    ctx->pc = 0x10735cu;
    // NOP
label_107360:
    // 0x107360: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x107360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x107364: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x107364u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x107368: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x107368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10736c: 0x0  nop
    ctx->pc = 0x10736cu;
    // NOP
    // 0x107370: 0x0  nop
    ctx->pc = 0x107370u;
    // NOP
    // 0x107374: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x107374u;
    {
        const bool branch_taken_0x107374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107374) {
            ctx->pc = 0x107360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107360;
        }
    }
    ctx->pc = 0x10737Cu;
    // 0x10737c: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x10737Cu;
    {
        const bool branch_taken_0x10737c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x107380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10737Cu;
        // 0x107380: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10737c) {
            ctx->pc = 0x107398u;
            goto label_107398;
        }
    }
    ctx->pc = 0x107384u;
    // 0x107384: 0x8e250820  lw          $a1, 0x820($s1)
    ctx->pc = 0x107384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2080)));
    // 0x107388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10738c: 0xc041bde  jal         func_106F78
    ctx->pc = 0x10738Cu;
    SET_GPR_U32(ctx, 31, 0x107394u);
    ctx->pc = 0x107390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10738Cu;
    // 0x107390: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x106F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F78u, 0x10738Cu, 0x107394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107394u;
label_107394:
    // 0x107394: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x107394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_107398:
    // 0x107398: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x107398u;
    {
        const bool branch_taken_0x107398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107398u;
        // 0x10739c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107398) {
            ctx->pc = 0x1073ACu;
            goto label_1073ac;
        }
    }
    ctx->pc = 0x1073A0u;
    // 0x1073a0: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x1073a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x1073a4: 0xc0417dc  jal         func_105F70
    ctx->pc = 0x1073A4u;
    SET_GPR_U32(ctx, 31, 0x1073ACu);
    ctx->pc = 0x1073A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1073A4u;
    // 0x1073a8: 0x24a5da20  addiu       $a1, $a1, -0x25E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F70u, 0x1073A4u, 0x1073ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1073ACu;
label_1073ac:
    // 0x1073ac: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1073acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1073b0:
    // 0x1073b0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1073b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1073b4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1073b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1073b8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1073b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1073bc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1073bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1073c0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1073c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1073c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1073c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1073c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1073c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1073cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1073ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1073d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1073D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1073D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1073D0u;
        // 0x1073d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1073D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1073D8u;
}
