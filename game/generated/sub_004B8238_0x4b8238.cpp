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

// Function: sub_004B8238
// Address: 0x4b8238 - 0x4b8b70
void sub_004B8238_0x4b8238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B8238_0x4b8238");
#endif

    switch (ctx->pc) {
        case 0x4b8274u: goto label_4b8274;
        case 0x4b8328u: goto label_4b8328;
        case 0x4b833cu: goto label_4b833c;
        case 0x4b8364u: goto label_4b8364;
        case 0x4b836cu: goto label_4b836c;
        case 0x4b8390u: goto label_4b8390;
        case 0x4b842cu: goto label_4b842c;
        case 0x4b8434u: goto label_4b8434;
        case 0x4b8448u: goto label_4b8448;
        case 0x4b845cu: goto label_4b845c;
        case 0x4b8464u: goto label_4b8464;
        case 0x4b846cu: goto label_4b846c;
        case 0x4b8474u: goto label_4b8474;
        case 0x4b847cu: goto label_4b847c;
        case 0x4b8490u: goto label_4b8490;
        case 0x4b84a0u: goto label_4b84a0;
        case 0x4b84a8u: goto label_4b84a8;
        case 0x4b84b0u: goto label_4b84b0;
        case 0x4b84d8u: goto label_4b84d8;
        case 0x4b878cu: goto label_4b878c;
        case 0x4b87d8u: goto label_4b87d8;
        case 0x4b88a4u: goto label_4b88a4;
        case 0x4b88acu: goto label_4b88ac;
        case 0x4b88c4u: goto label_4b88c4;
        case 0x4b88ccu: goto label_4b88cc;
        case 0x4b88e0u: goto label_4b88e0;
        case 0x4b8908u: goto label_4b8908;
        case 0x4b8910u: goto label_4b8910;
        case 0x4b8918u: goto label_4b8918;
        case 0x4b8920u: goto label_4b8920;
        case 0x4b8930u: goto label_4b8930;
        case 0x4b894cu: goto label_4b894c;
        case 0x4b8954u: goto label_4b8954;
        case 0x4b8988u: goto label_4b8988;
        case 0x4b8b0cu: goto label_4b8b0c;
        case 0x4b8b4cu: goto label_4b8b4c;
        default: break;
    }

    ctx->pc = 0x4b8238u;

    // 0x4b8238: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4b8238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4b823c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b823cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4b8240: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b8240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8244: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4b8244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4b8248: 0x263301b4  addiu       $s3, $s1, 0x1B4
    ctx->pc = 0x4b8248u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 436));
    // 0x4b824c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b824cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b8250: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4b8250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4b8254: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4b8254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4b8258: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4b8258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4b825c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4b825cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4b8260: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4b8260u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b8264: 0x440001e  bltz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4B8264u;
    {
        const bool branch_taken_0x4b8264 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4B8268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8264u;
        // 0x4b8268: 0x26260008  addiu       $a2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8264) {
            ctx->pc = 0x4B82E0u;
            goto label_4b82e0;
        }
    }
    ctx->pc = 0x4B826Cu;
    // 0x4b826c: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4B826Cu;
    SET_GPR_U32(ctx, 31, 0x4B8274u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4B826Cu, 0x4B8274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8274u;
label_4b8274:
    // 0x4b8274: 0x3604ffff  ori         $a0, $s0, 0xFFFF
    ctx->pc = 0x4b8274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4b8278: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x4b8278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x4b827c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4b827cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4b8280: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4b8280u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b8284: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x4b8284u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
    // 0x4b8288: 0x2442ffe7  addiu       $v0, $v0, -0x19
    ctx->pc = 0x4b8288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
    // 0x4b828c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4b828cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4b8290: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x4b8290u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b8294: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x4b8294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4b8298: 0x3604ffff  ori         $a0, $s0, 0xFFFF
    ctx->pc = 0x4b8298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4b829c: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4b829cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4b82a0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4b82a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4b82a4: 0x838024  and         $s0, $a0, $v1
    ctx->pc = 0x4b82a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4b82a8: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x4b82a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4b82ac: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b82acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b82b0: 0x3c120054  lui         $s2, 0x54
    ctx->pc = 0x4b82b0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)84 << 16));
    // 0x4b82b4: 0x26526e70  addiu       $s2, $s2, 0x6E70
    ctx->pc = 0x4b82b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28272));
    // 0x4b82b8: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x4b82b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4b82bc: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4b82bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b82c0: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x4b82c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b82c4: 0x96440008  lhu         $a0, 0x8($s2)
    ctx->pc = 0x4b82c4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4b82c8: 0xa6240158  sh          $a0, 0x158($s1)
    ctx->pc = 0x4b82c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 344), (uint16_t)GPR_U32(ctx, 4));
    // 0x4b82cc: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4b82ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4b82d0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4b82d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4b82d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4B82D4u;
    {
        const bool branch_taken_0x4b82d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B82D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B82D4u;
        // 0x4b82d8: 0xa6620000  sh          $v0, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b82d4) {
            ctx->pc = 0x4B82E4u;
            goto label_4b82e4;
        }
    }
    ctx->pc = 0x4B82DCu;
    // 0x4b82dc: 0x0  nop
    ctx->pc = 0x4b82dcu;
    // NOP
label_4b82e0:
    // 0x4b82e0: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x4b82e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
label_4b82e4:
    // 0x4b82e4: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4b82e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b82e8: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4b82e8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4b82ec: 0x3605ffff  ori         $a1, $s0, 0xFFFF
    ctx->pc = 0x4b82ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4b82f0: 0x24f26e70  addiu       $s2, $a3, 0x6E70
    ctx->pc = 0x4b82f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 28272));
    // 0x4b82f4: 0x2442ffe7  addiu       $v0, $v0, -0x19
    ctx->pc = 0x4b82f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
    // 0x4b82f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b82f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b82fc: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4b82fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4b8300: 0xa28024  and         $s0, $a1, $v0
    ctx->pc = 0x4b8300u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b8304: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x4b8304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4b8308: 0x3605ffff  ori         $a1, $s0, 0xFFFF
    ctx->pc = 0x4b8308u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4b830c: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4b830cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4b8310: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4b8310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x4b8314: 0xa38024  and         $s0, $a1, $v1
    ctx->pc = 0x4b8314u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4b8318: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x4b8318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4b831c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b831cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b8320: 0xc12564a  jal         func_495928
    ctx->pc = 0x4B8320u;
    SET_GPR_U32(ctx, 31, 0x4B8328u);
    ctx->pc = 0x4B8324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8320u;
    // 0x4b8324: 0x529021  addu        $s2, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x495928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495928u, 0x4B8320u, 0x4B8328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8328u;
label_4b8328:
    // 0x4b8328: 0x50400062  beql        $v0, $zero, . + 4 + (0x62 << 2)
    ctx->pc = 0x4B8328u;
    {
        const bool branch_taken_0x4b8328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b8328) {
            ctx->pc = 0x4B832Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B8328u;
            // 0x4b832c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B84B4u;
            goto label_4b84b4;
        }
    }
    ctx->pc = 0x4B8330u;
    // 0x4b8330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b8330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8334: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4B8334u;
    SET_GPR_U32(ctx, 31, 0x4B833Cu);
    ctx->pc = 0x4B8338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8334u;
    // 0x4b8338: 0x26340120  addiu       $s4, $s1, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4B8334u, 0x4B833Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B833Cu;
label_4b833c:
    // 0x4b833c: 0x36a3ffff  ori         $v1, $s5, 0xFFFF
    ctx->pc = 0x4b833cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x4b8340: 0x86440002  lh          $a0, 0x2($s2)
    ctx->pc = 0x4b8340u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x4b8344: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4b8344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8348: 0x86450004  lh          $a1, 0x4($s2)
    ctx->pc = 0x4b8348u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4b834c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4b834cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8350: 0x932025  or          $a0, $a0, $s3
    ctx->pc = 0x4b8350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 19));
    // 0x4b8354: 0xb32825  or          $a1, $a1, $s3
    ctx->pc = 0x4b8354u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 19));
    // 0x4b8358: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x4b8358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4b835c: 0xc127d62  jal         func_49F588
    ctx->pc = 0x4B835Cu;
    SET_GPR_U32(ctx, 31, 0x4B8364u);
    ctx->pc = 0x4B8360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B835Cu;
    // 0x4b8360: 0x452824  and         $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F588u, 0x4B835Cu, 0x4B8364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8364u;
label_4b8364:
    // 0x4b8364: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4B8364u;
    SET_GPR_U32(ctx, 31, 0x4B836Cu);
    ctx->pc = 0x4B8368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8364u;
    // 0x4b8368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4B8364u, 0x4B836Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B836Cu;
label_4b836c:
    // 0x4b836c: 0x3605ffff  ori         $a1, $s0, 0xFFFF
    ctx->pc = 0x4b836cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4b8370: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x4b8370u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x4b8374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b8374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8378: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4b8378u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b837c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4b837cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4b8380: 0xa28024  and         $s0, $a1, $v0
    ctx->pc = 0x4b8380u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b8384: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4b8384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4b8388: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4B8388u;
    SET_GPR_U32(ctx, 31, 0x4B8390u);
    ctx->pc = 0x4B838Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8388u;
    // 0x4b838c: 0xa6830000  sh          $v1, 0x0($s4) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4B8388u, 0x4B8390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8390u;
label_4b8390:
    // 0x4b8390: 0x3604ffff  ori         $a0, $s0, 0xFFFF
    ctx->pc = 0x4b8390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4b8394: 0x8642000a  lh          $v0, 0xA($s2)
    ctx->pc = 0x4b8394u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x4b8398: 0x2625015e  addiu       $a1, $s1, 0x15E
    ctx->pc = 0x4b8398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 350));
    // 0x4b839c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4b839cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b83a0: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4b83a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4b83a4: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x4b83a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b83a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4b83a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4b83ac: 0x701024  and         $v0, $v1, $s0
    ctx->pc = 0x4b83acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x4b83b0: 0x3604ffff  ori         $a0, $s0, 0xFFFF
    ctx->pc = 0x4b83b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4b83b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b83b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b83b8: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x4b83b8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b83bc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b83bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b83c0: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4b83c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4b83c4: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x4b83c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b83c8: 0x101c00  sll         $v1, $s0, 16
    ctx->pc = 0x4b83c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4b83cc: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x4B83CCu;
    {
        const bool branch_taken_0x4b83cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B83D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B83CCu;
        // 0x4b83d0: 0x3c050073  lui         $a1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b83cc) {
            ctx->pc = 0x4B842Cu;
            goto label_4b842c;
        }
    }
    ctx->pc = 0x4B83D4u;
    // 0x4b83d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b83d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b83d8: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x4b83d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x4b83dc: 0xa4a02330  sh          $zero, 0x2330($a1)
    ctx->pc = 0x4b83dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9008), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b83e0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4b83e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4b83e4: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4b83e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4b83e8: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4b83e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4b83ec: 0xa4a22334  sh          $v0, 0x2334($a1)
    ctx->pc = 0x4b83ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9012), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b83f0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x4b83f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4b83f4: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x4b83f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x4b83f8: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4b83f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4b83fc: 0xa4a32336  sh          $v1, 0x2336($a1)
    ctx->pc = 0x4b83fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b8400: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x4b8400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4b8404: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4b8404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4b8408: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4b8408u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4b840c: 0xa4a22338  sh          $v0, 0x2338($a1)
    ctx->pc = 0x4b840cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9016), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b8410: 0x96230118  lhu         $v1, 0x118($s1)
    ctx->pc = 0x4b8410u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x4b8414: 0xa4a3233a  sh          $v1, 0x233A($a1)
    ctx->pc = 0x4b8414u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9018), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b8418: 0x9622011c  lhu         $v0, 0x11C($s1)
    ctx->pc = 0x4b8418u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x4b841c: 0xa4a2233c  sh          $v0, 0x233C($a1)
    ctx->pc = 0x4b841cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 9020), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b8420: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4b8420u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b8424: 0xc127a50  jal         func_49E940
    ctx->pc = 0x4B8424u;
    SET_GPR_U32(ctx, 31, 0x4B842Cu);
    ctx->pc = 0x4B8428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8424u;
    // 0x4b8428: 0xa4a3233e  sh          $v1, 0x233E($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 9022), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E940u, 0x4B8424u, 0x4B842Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B842Cu;
label_4b842c:
    // 0x4b842c: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4B842Cu;
    SET_GPR_U32(ctx, 31, 0x4B8434u);
    ctx->pc = 0x4B8430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B842Cu;
    // 0x4b8430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4B842Cu, 0x4B8434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8434u;
label_4b8434:
    // 0x4b8434: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x4B8434u;
    {
        const bool branch_taken_0x4b8434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8434u;
        // 0x4b8438: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8434) {
            ctx->pc = 0x4B84B4u;
            goto label_4b84b4;
        }
    }
    ctx->pc = 0x4B843Cu;
    // 0x4b843c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b843cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8440: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4B8440u;
    SET_GPR_U32(ctx, 31, 0x4B8448u);
    ctx->pc = 0x4B8444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8440u;
    // 0x4b8444: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4B8440u, 0x4B8448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8448u;
label_4b8448:
    // 0x4b8448: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x4b8448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b844c: 0x5450000e  bnel        $v0, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x4B844Cu;
    {
        const bool branch_taken_0x4b844c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x4b844c) {
            ctx->pc = 0x4B8450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B844Cu;
            // 0x4b8450: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B8488u;
            goto label_4b8488;
        }
    }
    ctx->pc = 0x4B8454u;
    // 0x4b8454: 0xc12e06c  jal         func_4B81B0
    ctx->pc = 0x4B8454u;
    SET_GPR_U32(ctx, 31, 0x4B845Cu);
    ctx->pc = 0x4B8458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8454u;
    // 0x4b8458: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B81B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B81B0u, 0x4B8454u, 0x4B845Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B845Cu;
label_4b845c:
    // 0x4b845c: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4B845Cu;
    SET_GPR_U32(ctx, 31, 0x4B8464u);
    ctx->pc = 0x4B8460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B845Cu;
    // 0x4b8460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4B845Cu, 0x4B8464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8464u;
label_4b8464:
    // 0x4b8464: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4B8464u;
    SET_GPR_U32(ctx, 31, 0x4B846Cu);
    ctx->pc = 0x4B8468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8464u;
    // 0x4b8468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4B8464u, 0x4B846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B846Cu;
label_4b846c:
    // 0x4b846c: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4B846Cu;
    SET_GPR_U32(ctx, 31, 0x4B8474u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4B846Cu, 0x4B8474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8474u;
label_4b8474:
    // 0x4b8474: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4B8474u;
    SET_GPR_U32(ctx, 31, 0x4B847Cu);
    ctx->pc = 0x4B8478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8474u;
    // 0x4b8478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4B8474u, 0x4B847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B847Cu;
label_4b847c:
    // 0x4b847c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4B847Cu;
    {
        const bool branch_taken_0x4b847c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B847Cu;
        // 0x4b8480: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b847c) {
            ctx->pc = 0x4B84B4u;
            goto label_4b84b4;
        }
    }
    ctx->pc = 0x4B8484u;
    // 0x4b8484: 0x0  nop
    ctx->pc = 0x4b8484u;
    // NOP
label_4b8488:
    // 0x4b8488: 0xc1280fa  jal         func_4A03E8
    ctx->pc = 0x4B8488u;
    SET_GPR_U32(ctx, 31, 0x4B8490u);
    ctx->pc = 0x4B848Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8488u;
    // 0x4b848c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A03E8u, 0x4B8488u, 0x4B8490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8490u;
label_4b8490:
    // 0x4b8490: 0x54500008  bnel        $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B8490u;
    {
        const bool branch_taken_0x4b8490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x4b8490) {
            ctx->pc = 0x4B8494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B8490u;
            // 0x4b8494: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B84B4u;
            goto label_4b84b4;
        }
    }
    ctx->pc = 0x4B8498u;
    // 0x4b8498: 0xc12e06c  jal         func_4B81B0
    ctx->pc = 0x4B8498u;
    SET_GPR_U32(ctx, 31, 0x4B84A0u);
    ctx->pc = 0x4B849Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8498u;
    // 0x4b849c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B81B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B81B0u, 0x4B8498u, 0x4B84A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B84A0u;
label_4b84a0:
    // 0x4b84a0: 0xc122f26  jal         func_48BC98
    ctx->pc = 0x4B84A0u;
    SET_GPR_U32(ctx, 31, 0x4B84A8u);
    ctx->pc = 0x4B84A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B84A0u;
    // 0x4b84a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BC98u, 0x4B84A0u, 0x4B84A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B84A8u;
label_4b84a8:
    // 0x4b84a8: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4B84A8u;
    SET_GPR_U32(ctx, 31, 0x4B84B0u);
    ctx->pc = 0x4B84ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B84A8u;
    // 0x4b84ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4B84A8u, 0x4B84B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B84B0u;
label_4b84b0:
    // 0x4b84b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b84b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b84b4:
    // 0x4b84b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b84b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b84b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b84b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b84bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b84bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b84c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b84c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b84c4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4b84c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b84c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4b84c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b84cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4B84CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B84D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B84CCu;
        // 0x4b84d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B84CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B84D4u;
    // 0x4b84d4: 0x0  nop
    ctx->pc = 0x4b84d4u;
    // NOP
label_4b84d8:
    // 0x4b84d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b84d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b84dc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b84dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b84e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4b84e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4b84e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4b84e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b84e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4b84e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4b84ec: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4b84ecu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4b84f0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4b84f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4b84f4: 0x264a0010  addiu       $t2, $s2, 0x10
    ctx->pc = 0x4b84f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x4b84f8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4b84f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4b84fc: 0x24750d88  addiu       $s5, $v1, 0xD88
    ctx->pc = 0x4b84fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 3464));
    // 0x4b8500: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4b8500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4b8504: 0x265e0166  addiu       $fp, $s2, 0x166
    ctx->pc = 0x4b8504u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 358));
    // 0x4b8508: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b8508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b850c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b850cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b8510: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b8510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4b8514: 0x24740d8c  addiu       $s4, $v1, 0xD8C
    ctx->pc = 0x4b8514u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 3468));
    // 0x4b8518: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4b8518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4b851c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b851cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b8520: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4b8520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4b8524: 0x246f0d90  addiu       $t7, $v1, 0xD90
    ctx->pc = 0x4b8524u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 3472));
    // 0x4b8528: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4b8528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4b852c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b852cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b8530: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x4b8530u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0D88u));
    // 0x4b8534: 0x246d0d94  addiu       $t5, $v1, 0xD94
    ctx->pc = 0x4b8534u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 3476));
    // 0x4b8538: 0x86420130  lh          $v0, 0x130($s2)
    ctx->pc = 0x4b8538u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x4b853c: 0x264b0014  addiu       $t3, $s2, 0x14
    ctx->pc = 0x4b853cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x4b8540: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b8540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b8544: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4b8544u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0D8Cu));
    // 0x4b8548: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4b8548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4b854c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x4b854cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0D90u));
    // 0x4b8550: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4b8550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b8554: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b8554u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b8558: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4b8558u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x4b855c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b855cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b8560: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b8560u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b8564: 0x264c0018  addiu       $t4, $s2, 0x18
    ctx->pc = 0x4b8564u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x4b8568: 0x86420132  lh          $v0, 0x132($s2)
    ctx->pc = 0x4b8568u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 306)));
    // 0x4b856c: 0x8da90000  lw          $t1, 0x0($t5)
    ctx->pc = 0x4b856cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4b8570: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4b8570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4b8574: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x4b8574u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b8578: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b8578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b857c: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4b857cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4b8580: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b8580u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b8584: 0x86420134  lh          $v0, 0x134($s2)
    ctx->pc = 0x4b8584u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 308)));
    // 0x4b8588: 0x86880000  lh          $t0, 0x0($s4)
    ctx->pc = 0x4b8588u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b858c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4b858cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4b8590: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b8590u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b8594: 0xade60000  sw          $a2, 0x0($t7)
    ctx->pc = 0x4b8594u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 6));
    // 0x4b8598: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b8598u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b859c: 0x8d220050  lw          $v0, 0x50($t1)
    ctx->pc = 0x4b859cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x4b85a0: 0x85e70000  lh          $a3, 0x0($t7)
    ctx->pc = 0x4b85a0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4b85a4: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4b85a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4b85a8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b85a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b85ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b85acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b85b0: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4b85b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x4b85b4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4b85b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4b85b8: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4b85b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x4b85bc: 0x8d220054  lw          $v0, 0x54($t1)
    ctx->pc = 0x4b85bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 84)));
    // 0x4b85c0: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x4b85c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b85c4: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4b85c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4b85c8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b85c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b85cc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4b85ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b85d0: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4b85d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4b85d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b85d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b85d8: 0x1134025  or          $t0, $t0, $s3
    ctx->pc = 0x4b85d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 19));
    // 0x4b85dc: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x4b85dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x4b85e0: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4b85e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4b85e4: 0x8d220058  lw          $v0, 0x58($t1)
    ctx->pc = 0x4b85e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 88)));
    // 0x4b85e8: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4b85e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4b85ec: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b85ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b85f0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4b85f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4b85f4: 0xf33825  or          $a3, $a3, $s3
    ctx->pc = 0x4b85f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 19));
    // 0x4b85f8: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x4b85f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x4b85fc: 0xade60000  sw          $a2, 0x0($t7)
    ctx->pc = 0x4b85fcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 6));
    // 0x4b8600: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4b8600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b8604: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4b8604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4b8608: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b8608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b860c: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4b860cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4b8610: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4b8610u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b8614: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4b8614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b8618: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4b8618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b861c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b861cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b8620: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4b8620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4b8624: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b8624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b8628: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4b8628u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x4b862c: 0x95e30000  lhu         $v1, 0x0($t7)
    ctx->pc = 0x4b862cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4b8630: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4b8630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4b8634: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4b8634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b8638: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b8638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b863c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4b863cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4b8640: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b8640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b8644: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x4b8644u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x4b8648: 0x87c30000  lh          $v1, 0x0($fp)
    ctx->pc = 0x4b8648u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4b864c: 0x5460008e  bnel        $v1, $zero, . + 4 + (0x8E << 2)
    ctx->pc = 0x4B864Cu;
    {
        const bool branch_taken_0x4b864c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b864c) {
            ctx->pc = 0x4B8650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B864Cu;
            // 0x4b8650: 0x96440118  lhu         $a0, 0x118($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B8888u;
            goto label_4b8888;
        }
    }
    ctx->pc = 0x4B8654u;
    // 0x4b8654: 0x8dab0000  lw          $t3, 0x0($t5)
    ctx->pc = 0x4b8654u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4b8658: 0x3c160073  lui         $s6, 0x73
    ctx->pc = 0x4b8658u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)115 << 16));
    // 0x4b865c: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x4b865cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b8660: 0x26d1d680  addiu       $s1, $s6, -0x2980
    ctx->pc = 0x4b8660u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294956672));
    // 0x4b8664: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4b8664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b8668: 0x262d2494  addiu       $t5, $s1, 0x2494
    ctx->pc = 0x4b8668u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), 9364));
    // 0x4b866c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x4b866cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b8670: 0x262c249c  addiu       $t4, $s1, 0x249C
    ctx->pc = 0x4b8670u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), 9372));
    // 0x4b8674: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4b8674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4b8678: 0x86870000  lh          $a3, 0x0($s4)
    ctx->pc = 0x4b8678u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b867c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b867cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b8680: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b8680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b8684: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4b8684u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b8688: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4b8688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b868c: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4b868cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x4b8690: 0x85e80000  lh          $t0, 0x0($t7)
    ctx->pc = 0x4b8690u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4b8694: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4b8694u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4b8698: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b8698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b869c: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4b869cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x4b86a0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b86a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b86a4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x4b86a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4b86a8: 0x262e2498  addiu       $t6, $s1, 0x2498
    ctx->pc = 0x4b86a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 9368));
    // 0x4b86ac: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x4b86acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x4b86b0: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4b86b0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4b86b4: 0x8daa0000  lw          $t2, 0x0($t5)
    ctx->pc = 0x4b86b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4b86b8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b86b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b86bc: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4b86bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4b86c0: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x4b86c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b86c4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b86c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b86c8: 0x1535025  or          $t2, $t2, $s3
    ctx->pc = 0x4b86c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 19));
    // 0x4b86cc: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4b86ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4b86d0: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4b86d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4b86d4: 0xf33825  or          $a3, $a3, $s3
    ctx->pc = 0x4b86d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 19));
    // 0x4b86d8: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4b86d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x4b86dc: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4b86dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4b86e0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4b86e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4b86e4: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4b86e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4b86e8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b86e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b86ec: 0x8dc90000  lw          $t1, 0x0($t6)
    ctx->pc = 0x4b86ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4b86f0: 0x26f00d80  addiu       $s0, $s7, 0xD80
    ctx->pc = 0x4b86f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 3456));
    // 0x4b86f4: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x4b86f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x4b86f8: 0x8d870000  lw          $a3, 0x0($t4)
    ctx->pc = 0x4b86f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4b86fc: 0x1334825  or          $t1, $t1, $s3
    ctx->pc = 0x4b86fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 19));
    // 0x4b8700: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4b8700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4b8704: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x4b8704u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b8708: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b8708u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b870c: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4b870cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x4b8710: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4b8710u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4b8714: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4b8714u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4b8718: 0x1134025  or          $t0, $t0, $s3
    ctx->pc = 0x4b8718u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 19));
    // 0x4b871c: 0x96a40000  lhu         $a0, 0x0($s5)
    ctx->pc = 0x4b871cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b8720: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x4b8720u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x4b8724: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4b8724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x4b8728: 0xade60000  sw          $a2, 0x0($t7)
    ctx->pc = 0x4b8728u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 6));
    // 0x4b872c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b872cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b8730: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4b8730u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4b8734: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4b8734u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4b8738: 0x85e20000  lh          $v0, 0x0($t7)
    ctx->pc = 0x4b8738u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4b873c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b873cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b8740: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4b8740u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4b8744: 0x1445024  and         $t2, $t2, $a0
    ctx->pc = 0x4b8744u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 4));
    // 0x4b8748: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4b8748u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4b874c: 0xf33825  or          $a3, $a3, $s3
    ctx->pc = 0x4b874cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 19));
    // 0x4b8750: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4b8750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4b8754: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4b8754u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b8758: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b8758u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b875c: 0xade60000  sw          $a2, 0x0($t7)
    ctx->pc = 0x4b875cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 6));
    // 0x4b8760: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4b8760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b8764: 0xadaa0000  sw          $t2, 0x0($t5)
    ctx->pc = 0x4b8764u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 10));
    // 0x4b8768: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b8768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b876c: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x4b876cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x4b8770: 0x95e20000  lhu         $v0, 0x0($t7)
    ctx->pc = 0x4b8770u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4b8774: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x4b8774u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
    // 0x4b8778: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b8778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b877c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b877cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b8780: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4b8780u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4b8784: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4B8784u;
    SET_GPR_U32(ctx, 31, 0x4B878Cu);
    ctx->pc = 0x4B8788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8784u;
    // 0x4b8788: 0xad870000  sw          $a3, 0x0($t4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4B8784u, 0x4B878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B878Cu;
label_4b878c:
    // 0x4b878c: 0x86440162  lh          $a0, 0x162($s2)
    ctx->pc = 0x4b878cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 354)));
    // 0x4b8790: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4b8790u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b8794: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4b8794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8798: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4b8798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b879c: 0x932025  or          $a0, $a0, $s3
    ctx->pc = 0x4b879cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 19));
    // 0x4b87a0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4b87a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b87a4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4b87a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4b87a8: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x4b87a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x4b87ac: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x4b87acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x4b87b0: 0x30e4ffff  andi        $a0, $a3, 0xFFFF
    ctx->pc = 0x4b87b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x4b87b4: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4b87b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4b87b8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4b87b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4b87bc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4b87bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4b87c0: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4b87c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4b87c4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4b87c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b87c8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4b87c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4b87cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4b87ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b87d0: 0xc127d62  jal         func_49F588
    ctx->pc = 0x4B87D0u;
    SET_GPR_U32(ctx, 31, 0x4B87D8u);
    ctx->pc = 0x4B87D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B87D0u;
    // 0x4b87d4: 0xae070000  sw          $a3, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F588u, 0x4B87D0u, 0x4B87D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B87D8u;
label_4b87d8:
    // 0x4b87d8: 0x962324a2  lhu         $v1, 0x24A2($s1)
    ctx->pc = 0x4b87d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 9378)));
    // 0x4b87dc: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4b87dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4b87e0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b87e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b87e4: 0x8643011c  lh          $v1, 0x11C($s2)
    ctx->pc = 0x4b87e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 284)));
    // 0x4b87e8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4b87e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b87ec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4b87ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b87f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4b87f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4b87f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b87f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b87f8: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4b87f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b87fc: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B87FCu;
    {
        const bool branch_taken_0x4b87fc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4B8800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B87FCu;
        // 0x4b8800: 0x24a40d84  addiu       $a0, $a1, 0xD84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3460));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b87fc) {
            ctx->pc = 0x4B8810u;
            goto label_4b8810;
        }
    }
    ctx->pc = 0x4B8804u;
    // 0x4b8804: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b8804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b8808: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4B8808u;
    {
        const bool branch_taken_0x4b8808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8808u;
        // 0x4b880c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8808) {
            ctx->pc = 0x4B8818u;
            goto label_4b8818;
        }
    }
    ctx->pc = 0x4B8810u;
label_4b8810:
    // 0x4b8810: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b8810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b8814: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4b8814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_4b8818:
    // 0x4b8818: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4b8818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4b881c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4b881cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4b8820: 0x26e60d80  addiu       $a2, $s7, 0xD80
    ctx->pc = 0x4b8820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 3456));
    // 0x4b8824: 0x94a50d84  lhu         $a1, 0xD84($a1)
    ctx->pc = 0x4b8824u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 3460)));
    // 0x4b8828: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4b8828u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b882c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4b882cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b8830: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x4b8830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x4b8834: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4b8834u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4b8838: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b8838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b883c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b883cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b8840: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b8840u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b8844: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4b8844u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4b8848: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4b8848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4b884c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b884cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b8850: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4b8850u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4b8854: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b8854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b8858: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4b8858u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b885c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4b885cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4b8860: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4b8860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4b8864: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b8864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b8868: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x4b8868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4b886c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4b886cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4b8870: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x4b8870u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x4b8874: 0xa7c40000  sh          $a0, 0x0($fp)
    ctx->pc = 0x4b8874u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4b8878: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4b8878u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b887c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4B887Cu;
    {
        const bool branch_taken_0x4b887c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B887Cu;
        // 0x4b8880: 0xa6420168  sh          $v0, 0x168($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 360), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b887c) {
            ctx->pc = 0x4B889Cu;
            goto label_4b889c;
        }
    }
    ctx->pc = 0x4B8884u;
    // 0x4b8884: 0x0  nop
    ctx->pc = 0x4b8884u;
    // NOP
label_4b8888:
    // 0x4b8888: 0x3c160073  lui         $s6, 0x73
    ctx->pc = 0x4b8888u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)115 << 16));
    // 0x4b888c: 0x26c3d680  addiu       $v1, $s6, -0x2980
    ctx->pc = 0x4b888cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294956672));
    // 0x4b8890: 0xa46424a0  sh          $a0, 0x24A0($v1)
    ctx->pc = 0x4b8890u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x72FB20u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FB20u, _value); } while (0);
    // 0x4b8894: 0x9642011c  lhu         $v0, 0x11C($s2)
    ctx->pc = 0x4b8894u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 284)));
    // 0x4b8898: 0xa46224a2  sh          $v0, 0x24A2($v1)
    ctx->pc = 0x4b8898u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72FB22u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FB22u, _value); } while (0);
label_4b889c:
    // 0x4b889c: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4B889Cu;
    SET_GPR_U32(ctx, 31, 0x4B88A4u);
    ctx->pc = 0x4B88A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B889Cu;
    // 0x4b88a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4B889Cu, 0x4B88A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B88A4u;
label_4b88a4:
    // 0x4b88a4: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4B88A4u;
    SET_GPR_U32(ctx, 31, 0x4B88ACu);
    ctx->pc = 0x4B88A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B88A4u;
    // 0x4b88a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4B88A4u, 0x4B88ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B88ACu;
label_4b88ac:
    // 0x4b88ac: 0x26430120  addiu       $v1, $s2, 0x120
    ctx->pc = 0x4b88acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x4b88b0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b88b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b88b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b88b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b88b8: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x4b88b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x4b88bc: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4B88BCu;
    SET_GPR_U32(ctx, 31, 0x4B88C4u);
    ctx->pc = 0x4B88C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B88BCu;
    // 0x4b88c0: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4B88BCu, 0x4B88C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B88C4u;
label_4b88c4:
    // 0x4b88c4: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4B88C4u;
    SET_GPR_U32(ctx, 31, 0x4B88CCu);
    ctx->pc = 0x4B88C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B88C4u;
    // 0x4b88c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4B88C4u, 0x4B88CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B88CCu;
label_4b88cc:
    // 0x4b88cc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x4B88CCu;
    {
        const bool branch_taken_0x4b88cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B88D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B88CCu;
        // 0x4b88d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b88cc) {
            ctx->pc = 0x4B8958u;
            goto label_4b8958;
        }
    }
    ctx->pc = 0x4B88D4u;
    // 0x4b88d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b88d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b88d8: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4B88D8u;
    SET_GPR_U32(ctx, 31, 0x4B88E0u);
    ctx->pc = 0x4B88DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B88D8u;
    // 0x4b88dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4B88D8u, 0x4B88E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B88E0u;
label_4b88e0:
    // 0x4b88e0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x4b88e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b88e4: 0x14500010  bne         $v0, $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4B88E4u;
    {
        const bool branch_taken_0x4b88e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x4B88E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B88E4u;
        // 0x4b88e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b88e4) {
            ctx->pc = 0x4B8928u;
            goto label_4b8928;
        }
    }
    ctx->pc = 0x4B88ECu;
    // 0x4b88ec: 0x26c2d680  addiu       $v0, $s6, -0x2980
    ctx->pc = 0x4b88ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294956672));
    // 0x4b88f0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x4b88f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4b88f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4b88f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4b88f8: 0xa445232e  sh          $a1, 0x232E($v0)
    ctx->pc = 0x4b88f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 9006), (uint16_t)GPR_U32(ctx, 5));
    // 0x4b88fc: 0xa44323c4  sh          $v1, 0x23C4($v0)
    ctx->pc = 0x4b88fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 9156), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b8900: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4B8900u;
    SET_GPR_U32(ctx, 31, 0x4B8908u);
    ctx->pc = 0x4B8904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8900u;
    // 0x4b8904: 0xa440232c  sh          $zero, 0x232C($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 9004), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4B8900u, 0x4B8908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8908u;
label_4b8908:
    // 0x4b8908: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4B8908u;
    SET_GPR_U32(ctx, 31, 0x4B8910u);
    ctx->pc = 0x4B890Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8908u;
    // 0x4b890c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4B8908u, 0x4B8910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8910u;
label_4b8910:
    // 0x4b8910: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4B8910u;
    SET_GPR_U32(ctx, 31, 0x4B8918u);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4B8910u, 0x4B8918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8918u;
label_4b8918:
    // 0x4b8918: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4B8918u;
    SET_GPR_U32(ctx, 31, 0x4B8920u);
    ctx->pc = 0x4B891Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8918u;
    // 0x4b891c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4B8918u, 0x4B8920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8920u;
label_4b8920:
    // 0x4b8920: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4B8920u;
    {
        const bool branch_taken_0x4b8920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8920u;
        // 0x4b8924: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8920) {
            ctx->pc = 0x4B8958u;
            goto label_4b8958;
        }
    }
    ctx->pc = 0x4B8928u;
label_4b8928:
    // 0x4b8928: 0xc1280fa  jal         func_4A03E8
    ctx->pc = 0x4B8928u;
    SET_GPR_U32(ctx, 31, 0x4B8930u);
    ctx->pc = 0x4B892Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8928u;
    // 0x4b892c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A03E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A03E8u, 0x4B8928u, 0x4B8930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8930u;
label_4b8930:
    // 0x4b8930: 0x54500009  bnel        $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B8930u;
    {
        const bool branch_taken_0x4b8930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x4b8930) {
            ctx->pc = 0x4B8934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B8930u;
            // 0x4b8934: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B8958u;
            goto label_4b8958;
        }
    }
    ctx->pc = 0x4B8938u;
    // 0x4b8938: 0x26c3d680  addiu       $v1, $s6, -0x2980
    ctx->pc = 0x4b8938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294956672));
    // 0x4b893c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x4b893cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4b8940: 0xa462232e  sh          $v0, 0x232E($v1)
    ctx->pc = 0x4b8940u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 9006), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b8944: 0xc122f26  jal         func_48BC98
    ctx->pc = 0x4B8944u;
    SET_GPR_U32(ctx, 31, 0x4B894Cu);
    ctx->pc = 0x4B8948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8944u;
    // 0x4b8948: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BC98u, 0x4B8944u, 0x4B894Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B894Cu;
label_4b894c:
    // 0x4b894c: 0xc12b62c  jal         func_4AD8B0
    ctx->pc = 0x4B894Cu;
    SET_GPR_U32(ctx, 31, 0x4B8954u);
    ctx->pc = 0x4B8950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B894Cu;
    // 0x4b8950: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8B0u, 0x4B894Cu, 0x4B8954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8954u;
label_4b8954:
    // 0x4b8954: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b8954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b8958:
    // 0x4b8958: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b8958u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b895c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b895cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b8960: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b8960u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b8964: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b8964u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b8968: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4b8968u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b896c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4b896cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b8970: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4b8970u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b8974: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4b8974u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b8978: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4b8978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4b897c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B897Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B897Cu;
        // 0x4b8980: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B897Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B8984u;
    // 0x4b8984: 0x0  nop
    ctx->pc = 0x4b8984u;
    // NOP
label_4b8988:
    // 0x4b8988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b8988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b898c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4b898cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4b8990: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b8990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b8994: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b8994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8998: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4b8998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4b899c: 0x24a50d80  addiu       $a1, $a1, 0xD80
    ctx->pc = 0x4b899cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3456));
    // 0x4b89a0: 0x3c18ffff  lui         $t8, 0xFFFF
    ctx->pc = 0x4b89a0u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)65535 << 16));
    // 0x4b89a4: 0x860201b4  lh          $v0, 0x1B4($s0)
    ctx->pc = 0x4b89a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x4b89a8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4b89a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D80u));
    // 0x4b89ac: 0x581025  or          $v0, $v0, $t8
    ctx->pc = 0x4b89acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x4b89b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b89b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b89b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b89b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b89b8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4b89b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4b89bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b89bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b89c0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4b89c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b89c4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4b89c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4b89c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b89c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b89cc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b89ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b89d0: 0x581025  or          $v0, $v0, $t8
    ctx->pc = 0x4b89d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x4b89d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b89d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b89d8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4b89d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4b89dc: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4b89dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b89e0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B89E0u;
    {
        const bool branch_taken_0x4b89e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b89e0) {
            ctx->pc = 0x4B89E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B89E0u;
            // 0x4b89e4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B89F8u;
            goto label_4b89f8;
        }
    }
    ctx->pc = 0x4B89E8u;
    // 0x4b89e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b89e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b89ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4b89ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b89f0: 0x812e136  j           func_4B84D8
    ctx->pc = 0x4B89F0u;
    ctx->pc = 0x4B89F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B89F0u;
    // 0x4b89f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B84D8u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_4b84d8;
    ctx->pc = 0x4B89F8u;
label_4b89f8:
    // 0x4b89f8: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4b89f8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4b89fc: 0x258c0d88  addiu       $t4, $t4, 0xD88
    ctx->pc = 0x4b89fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 3464));
    // 0x4b8a00: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4b8a00u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4b8a04: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x4b8a04u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0D88u));
    // 0x4b8a08: 0x581024  and         $v0, $v0, $t8
    ctx->pc = 0x4b8a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 24));
    // 0x4b8a0c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b8a0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b8a10: 0x25ad0d8c  addiu       $t5, $t5, 0xD8C
    ctx->pc = 0x4b8a10u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 3468));
    // 0x4b8a14: 0x581025  or          $v0, $v0, $t8
    ctx->pc = 0x4b8a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x4b8a18: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b8a18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b8a1c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b8a1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b8a20: 0x8da60000  lw          $a2, 0x0($t5)
    ctx->pc = 0x4b8a20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4b8a24: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4b8a24u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4b8a28: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b8a28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b8a2c: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4b8a2cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4b8a30: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b8a30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b8a34: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4b8a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4b8a38: 0x25ce0d90  addiu       $t6, $t6, 0xD90
    ctx->pc = 0x4b8a38u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 3472));
    // 0x4b8a3c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b8a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b8a40: 0x8dc80000  lw          $t0, 0x0($t6)
    ctx->pc = 0x4b8a40u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F0D90u));
    // 0x4b8a44: 0x581024  and         $v0, $v0, $t8
    ctx->pc = 0x4b8a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 24));
    // 0x4b8a48: 0x8c6f0d94  lw          $t7, 0xD94($v1)
    ctx->pc = 0x4b8a48u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3476)));
    // 0x4b8a4c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b8a4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b8a50: 0x858a0000  lh          $t2, 0x0($t4)
    ctx->pc = 0x4b8a50u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4b8a54: 0x581025  or          $v0, $v0, $t8
    ctx->pc = 0x4b8a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x4b8a58: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4b8a58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4b8a5c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b8a5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b8a60: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4b8a60u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4b8a64: 0xada60000  sw          $a2, 0x0($t5)
    ctx->pc = 0x4b8a64u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 6));
    // 0x4b8a68: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b8a68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b8a6c: 0x256b0d84  addiu       $t3, $t3, 0xD84
    ctx->pc = 0x4b8a6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3460));
    // 0x4b8a70: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4b8a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4b8a74: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4b8a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4b8a78: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x4b8a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x4b8a7c: 0x85a90000  lh          $t1, 0x0($t5)
    ctx->pc = 0x4b8a7cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4b8a80: 0x581024  and         $v0, $v0, $t8
    ctx->pc = 0x4b8a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 24));
    // 0x4b8a84: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x4b8a84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b8a88: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b8a88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b8a8c: 0x581025  or          $v0, $v0, $t8
    ctx->pc = 0x4b8a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x4b8a90: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4b8a90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4b8a94: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4b8a94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4b8a98: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4b8a98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4b8a9c: 0xadc80000  sw          $t0, 0x0($t6)
    ctx->pc = 0x4b8a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 8));
    // 0x4b8aa0: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4b8aa0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4b8aa4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4b8aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8aa8: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x4b8aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4b8aac: 0x85c30000  lh          $v1, 0x0($t6)
    ctx->pc = 0x4b8aacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4b8ab0: 0x581024  and         $v0, $v0, $t8
    ctx->pc = 0x4b8ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 24));
    // 0x4b8ab4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b8ab4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b8ab8: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x4b8ab8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4b8abc: 0x1585025  or          $t2, $t2, $t8
    ctx->pc = 0x4b8abcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 24));
    // 0x4b8ac0: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x4b8ac0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x4b8ac4: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4b8ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4b8ac8: 0x8de20004  lw          $v0, 0x4($t7)
    ctx->pc = 0x4b8ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x4b8acc: 0x581024  and         $v0, $v0, $t8
    ctx->pc = 0x4b8accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 24));
    // 0x4b8ad0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b8ad0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b8ad4: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4b8ad4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4b8ad8: 0x1384825  or          $t1, $t1, $t8
    ctx->pc = 0x4b8ad8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 24));
    // 0x4b8adc: 0xc93024  and         $a2, $a2, $t1
    ctx->pc = 0x4b8adcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x4b8ae0: 0xada60000  sw          $a2, 0x0($t5)
    ctx->pc = 0x4b8ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 6));
    // 0x4b8ae4: 0x8de20008  lw          $v0, 0x8($t7)
    ctx->pc = 0x4b8ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x4b8ae8: 0xad670000  sw          $a3, 0x0($t3)
    ctx->pc = 0x4b8ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 7));
    // 0x4b8aec: 0x581024  and         $v0, $v0, $t8
    ctx->pc = 0x4b8aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 24));
    // 0x4b8af0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b8af0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b8af4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4b8af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b8af8: 0x781825  or          $v1, $v1, $t8
    ctx->pc = 0x4b8af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 24));
    // 0x4b8afc: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4b8afcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4b8b00: 0xadc80000  sw          $t0, 0x0($t6)
    ctx->pc = 0x4b8b00u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 8));
    // 0x4b8b04: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4B8B04u;
    SET_GPR_U32(ctx, 31, 0x4B8B0Cu);
    ctx->pc = 0x4B8B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8B04u;
    // 0x4b8b08: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4B8B04u, 0x4B8B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8B0Cu;
label_4b8b0c:
    // 0x4b8b0c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B8B0Cu;
    {
        const bool branch_taken_0x4b8b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B8B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8B0Cu;
        // 0x4b8b10: 0x24030070  addiu       $v1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8b0c) {
            ctx->pc = 0x4B8B28u;
            goto label_4b8b28;
        }
    }
    ctx->pc = 0x4B8B14u;
    // 0x4b8b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b8b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8b18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b8b18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b8b1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4b8b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b8b20: 0x812e136  j           func_4B84D8
    ctx->pc = 0x4B8B20u;
    ctx->pc = 0x4B8B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8B20u;
    // 0x4b8b24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B84D8u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_4b84d8;
    ctx->pc = 0x4B8B28u;
label_4b8b28:
    // 0x4b8b28: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x4b8b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x4b8b2c: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x4b8b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x4b8b30: 0xa6030158  sh          $v1, 0x158($s0)
    ctx->pc = 0x4b8b30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b8b34: 0xa602015c  sh          $v0, 0x15C($s0)
    ctx->pc = 0x4b8b34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 348), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b8b38: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4b8b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4b8b3c: 0xa6050162  sh          $a1, 0x162($s0)
    ctx->pc = 0x4b8b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 5));
    // 0x4b8b40: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4b8b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4b8b44: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4B8B44u;
    SET_GPR_U32(ctx, 31, 0x4B8B4Cu);
    ctx->pc = 0x4B8B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8B44u;
    // 0x4b8b48: 0xa482fa44  sh          $v0, -0x5BC($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294965828), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4B8B44u, 0x4B8B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8B4Cu;
label_4b8b4c:
    // 0x4b8b4c: 0x260301bc  addiu       $v1, $s0, 0x1BC
    ctx->pc = 0x4b8b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4b8b50: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b8b50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b8b54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b8b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8b58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4b8b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b8b5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b8b5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b8b60: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b8b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b8b64: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b8b64u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b8b68: 0x812e136  j           func_4B84D8
    ctx->pc = 0x4B8B68u;
    ctx->pc = 0x4B8B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8B68u;
    // 0x4b8b6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B84D8u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_4b84d8;
    ctx->pc = 0x4B8B70u;
}
